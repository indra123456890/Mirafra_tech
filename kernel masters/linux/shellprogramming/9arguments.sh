#!/bin/sh
#$1
if [ -d $1 ]
then
echo "given argument is directory"
elif [ -f $1 ]
then
echo "the given argument is file"
else
echo "the argument doesnot exist"
fi
