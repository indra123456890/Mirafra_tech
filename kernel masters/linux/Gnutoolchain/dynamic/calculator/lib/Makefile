all:calc
	echo "Build done"
calc:add.o sub.o
	gcc -shared add.o sub.o -o libcalc.so
add.o:add.c
	gcc -c -fpic add.c
sub.o:sub.c
	gcc -c -fpic sub.c
copy:
	sudo cp libcalc.so /usr/lib
