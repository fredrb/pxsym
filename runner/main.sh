#!/usr/bin/env bash

run_symbol_evaluation() {
	target=$1
	echo "Running symbol evaluation for $target"

	builder_path=$(pwd)/builder/$target.sh
	if [ ! -f $builder_path ]; then
		printf "Could not find builder for $target in\n\t $builder_path\n"	
		exit -1
	else
		echo "[x] Builder for $target"
	fi

	wrapper_path=$(pwd)/wrapper/$target
	if [ ! -d $wrapper_path ]; then
		printf "Could not find wrapper folder for $target in\n\t $wrapper_path\n"	
		exit -1
	else 
		echo "[x] Wrapper for $target"
	fi

	source $builder_path

	resultfile=$(pwd)/$target"_result.csv"
	rm $resultfile
	touch $resultfile

	if [ ! -d $(pwd)/log ]; then
		mkdir $(pwd)/log
	fi

	logfolder=$(pwd)/log

	# header="glob.h"
	for header in $(ls $(pwd)/out); do
		config_path=$(pwd)/configuration/header/$header.json
		if [ ! -f $config_path ]; then
			echo "Failed to load $config_path"
			continue
		fi 
		src_path=$(pwd)/out/$header/evaluation.cpp
		if [ ! -f $src_path ]; then
			echo "Failed to load $src_path"
			continue
		fi 
		run_builder $config_path $src_path $header
	done

}

# run_symbol_evaluation "includeos"
# run_symbol_evaluation "osv"

run_symbol_evaluation $1


