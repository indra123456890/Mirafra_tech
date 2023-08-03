include .config
ifdef SALES
CC_FLAG := -D SALES
endif
ifdef PURCHASE
CC_FLAG += -D PURCHASE
endif
all:super
	echo "build done"
super:main.o
	${CC} ${STATIC_FLAG} main.o -lsuper -L ../lib/ -o ../bin/super
main.o:main.c
	${CC} ${DEBUG_FLAG} ${CC_FLAG} -c main.c -I ../inc/
clean:
	rm *.o
	rm ../bin/super
install:
	sudo cp ../bin/super/user/bin
                                    
