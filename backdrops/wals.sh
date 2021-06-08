#!/bin/bash

file_names=`ls .`
x=1
for eachfile in $file_names 
do
	echo $((x++)) $eachfile
done

read filename

wal -i ~/backdrops/$filename && sh ~/wal-init.sh 


