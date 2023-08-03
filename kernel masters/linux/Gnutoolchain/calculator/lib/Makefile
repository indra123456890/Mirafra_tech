all:libcalc.a libcalc.so
	echo "lib Build done"
libcalc.a:
	gcc -c add.c
	gcc -c sub.c
	ar rcs  libcalc.a add.o sub.o
libcalc.so:
	gcc -c -fpic add.c
	gcc -c -fpic sub.c
	gcc -shared add.o sub.o -o libcalc.so
clean:
	rm *.o
	rm libcalc.a libcalc.so
install:
	sudo cp libcalc.a /usr/lib
	sudo cp libcalc.so /usr/lib
