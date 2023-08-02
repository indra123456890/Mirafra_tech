all:cal
	echo "buld done"	

cal: add.o mul.o sub.o main.o
	gcc add.c sub.c mul.c main.c -o cal

add.o:
	gcc -c add.c
mul.o:
	gcc -c mul.c
sub.o:
	gcc -c sub.c
main.o:
	gcc -c main.c

clean:
	rm *.o cal
