#2. Write Script to find out biggest number from given three nos. Nos are supplied as command line arguments. Print error if sufficient arguments are not supplied.

#!/bin/sh
if [ $# -eq 3 ]
then
if [ $2 -gt $1 ] && [ $2 -gt $3 ]
then
echo "bigger=$2"
elif [ $3 -gt $1 ] && [ $3 -gt $2 ]
then
echo "bigger =$3"
else
echo "bigger =$1"
fi
else
echo "error"
fi


