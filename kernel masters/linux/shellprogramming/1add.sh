#Write shell script that will add two nos, which are supplied as command line argument, and if this two nos are not given show error and its usage

#!/bin/sh
if [ $# -eq 2 ]
then
result=`expr $1 + $2`
echo "result=$result"
else
echo "error"
fi

