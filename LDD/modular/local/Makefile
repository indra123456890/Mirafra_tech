obj-m += 1mod.o
obj-m += 1mod_dep.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) 
 

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean 

