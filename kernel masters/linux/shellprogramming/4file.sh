#!/bin/sh
echo "enter file"
read file
if [ -e $file ]
then
echo "file exists"
else
echo "file not exist"
fi

