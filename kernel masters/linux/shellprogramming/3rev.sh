#!/bin/sh

read num
while [ $num -gt 0 ]
do
r=$(($num%10)) 
num=$(($num/10))
echo -n "$r"
done
