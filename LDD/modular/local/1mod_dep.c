#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

//extern int a;
extern int b;
//extern void write_fun(void);


int init_hello(void)
{
//printk("hello world indra mirfra..i2c dep\n");
printk(" enterd into dependency %d\n",b);
//write_fun();
return 0;
}


void cleanup_hello(void)
{
printk("goodbye global ..\n");
//printk("%d\n",a);
}


module_init(init_hello);
module_exit(cleanup_hello);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mirafra");
MODULE_DESCRIPTION("A Sample driver");
