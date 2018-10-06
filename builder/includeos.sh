# Include OS Builder

# provided: $resultfile
# provided: $logfolder

run_builder() {
	config=$1
	src=$2
	header=$3

	pushd $(pwd)/wrapper/includeos 1$>/dev/null

	tmp_build_log=/tmp/includeos_build
	includeos_log=/tmp/includeos_log
	
	rm -Rf ./build
	export EVALUATION_SRC=$src
	boot -b . 1&>$tmp_build_log

	# Assert if Build resulted in error
	if [ $? != 0 ]; then
		echo 
		echo Build for $src resulted in error
		echo
		result=$(cat $tmp_build_log | grep "file not found")
		if [ -z "$result" ]; then
			error_file="$logfolder/includeos_error_"$header"_$(date "+%y%m%d%H%M%S")"
			cat $tmp_build_log >> $error_file
			echo
			echo Failed for unknown reasons - check complete build log for this header: $error_file
			echo
		else 
			echo Missing header $header
			echo $result
		fi
		echo "$header;no" >> $resultfile
		popd
		return
	fi

	echo "\n\n" >> $includeos_log
	cat $tmp_build_log >> $includeos_log
	echo "$header;yes" >> $resultfile

	for symbol in $(cat $config | grep \"name\" | grep -v "," | sed -e 's/\"name\": //' -e 's/"//' -e 's/"$//'); do
		# echo "Evaluating symbol $symbol"
		condition=$(cat $tmp_build_log | grep "warning: PX" | grep "$symbol !" | grep -v "PXNAME" | awk '{ print $3 }' | head -n 1)
		# printf "\tCondition for $symbol is $condition\n"
		if [ $condition = "PXEXIST" ]; then 
			echo "[x] $symbol"
			echo "$symbol;yes" >> $resultfile
		else
			echo "[ ] $symbol"
			echo "$symbol;no" >> $resultfile
		fi
	done

	popd 
}
