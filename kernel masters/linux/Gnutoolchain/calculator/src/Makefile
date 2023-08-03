include .config
ifdef ADD
CC_FLAG := -D ADD
endif
ifdef SUB
CC_FLAG += -D SUB
endif
all:mycalc
	echo "build done"
mycalc:main.o
	${CC} ${STATIC_FLAG} main.o -lcalc -L ../lib/ -o ../bin/mycalc
main.o:main.c
	${CC} ${DEBUG_FLAG} ${CC_FLAG} -c main.c -I ../inc/
clean:
	rm *.o
	rm ../bin/mycalc
install:
	sudo cp ../bin/mycalc/user/bin
	

