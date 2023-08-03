all:supermarket2
	echo "Build done"
supermarket2:main.o stock.o sales.o purchase.o
	gcc main.o stock.o sales.o purchase.o -o supermarket2
main.o:main.c
	gcc -c main.c
stock.o:stock.c
	gcc -c stock.c
sales.o:sales.c
	gcc -c sales.c
purchase.o:purchase.c
	gcc -c purchase.c
clear:
	rm *.o
install:
	sudo cp supermarket2 /bin/
uninstall:
	sudo rm /bin/supermarket2
	

