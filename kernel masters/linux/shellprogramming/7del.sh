#!/bin/sh
echo "read file"
read file
echo "read word"
read word
grep -v -i $word $file > test
mv test $file
cat $file
echo "after removing $word:"
