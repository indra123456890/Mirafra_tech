#Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers.
#!/bin/sh
echo "enter file"
read file
echo "enter starting line"
read n
echo "enter last line"
read m
sed -n $n,$m\p $file

