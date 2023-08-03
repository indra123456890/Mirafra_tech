all:calc
	echo "Build done"
calc:main.o
	gcc -dynamic main.o -o main -lcalc
main.o:main.c
	gcc -c -fpic main.c
