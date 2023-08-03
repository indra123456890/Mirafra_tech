all:libsuper.a libsuper.so
	echo "lib Build done"
libsuper.a:
	gcc -c stock.c
	gcc -c sales.c
	gcc -c purchase.c
	ar -rc libsuper.a stock.o sales.o purchase.o
libsuper.so:
	gcc -c -fpic stock.c
	gcc -c -fpic sales.c
	gcc -c -fpic purchase.c
	gcc -shared stock.o sales.o purchase.o -o libsuper.so
clean:
	rm *.o
	rm libsuper.a libsuper.so
install:
	sudo cp libsuper.a /usr/lib
	sudo cp libsuper.so /usr/lib

