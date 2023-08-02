#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

extern void i2c_write(void);
void add(void);


void add(void)
{
	printk("add fun is called..\n");
	i2c_write();
}

int init_hello(void)
{
	printk("hello world indra mirfra..i2c dep\n");
	add();
	return 0;
}


void cleanup_hello(void)
{
	printk("goodbye world indra mirafra ..i2c dep\n");
	i2c_write();
}


module_init(init_hello);
module_exit(cleanup_hello);




MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mirafra");
MODULE_DESCRIPTION("A Sample driver");
