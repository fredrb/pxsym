#!/usr/bin/env bash

run_builder() {
	config=$1
	src=$2
	header=$3

	pushd $(pwd)/wrapper/osv 1$>/dev/null # todo: move this to main.sh

	tmp_build_log=/tmp/osv_build
	osv_log=/tmp/osv_log

	if [ -f $tmp_build_log ]; then
		rm $tmp_build_log
	fi
	touch $tmp_build_log

	rm run_evaluation.cc	
	cp $src run_evaluation.cc

	capstan build 1&>$tmp_build_log

	if [ $? != 0 ]; then
		result=$(cat $tmp_build_log | grep "file not found")
		if [ -z "$result" ]; then
			echo "$header;no" >> $resultfile
			echo "Failed due to missing header $header"
			echo $result
		fi
		popd
		return
	fi

	echo "\n\n" >> $osv_log
	cat $tmp_build_log >> $osv_log
	echo "$header;yes" >> $resultfile

	for symbol in $(cat $config | grep \"name\" | grep -v "," | sed -e 's/\"name\": //' -e 's/"//' -e 's/"$//'); do
		type=$(cat $tmp_build_log | grep "warning: PX" | grep " $symbol \!" | grep "PXNAME" | awk '{ print $6 }' | head -n 1)
		if [ "$type" = "function" ] || [ "$type" = "struct" ]; then
			r=$(cat $tmp_build_log | grep "use of undeclared identifier" | grep "'$symbol'")
			if [ -z "$r" ]; then
				condition="PXEXIST"
			else 
				condition="PXMISSING"
			fi
		else
			condition=$(cat $tmp_build_log | grep "warning: PX" | grep "$symbol !" | grep -v "PXNAME" | awk '{ print $3 }' | head -n 1)
		fi

		# condition=$(cat $tmp_build_log | grep "warning: PX" | grep "$symbol !" | grep -v "PXNAME" | awk '{ print $3 }' | head -n 1)
		if [ "$condition" = "PXEXIST" ]; then 
			echo "[x] $symbol"
			echo "$header;$type;$symbol;yes" >> $resultfile
		else
			echo "[ ] $symbol"
			echo "$header;$type;$symbol;no" >> $resultfile
		fi
	done

	popd
}
