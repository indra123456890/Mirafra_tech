#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

//int a=10;
//EXPORT_SYMBOL(a);

void write_fun(void)
{
	int b=20;
	EXPORT_SYMBOL(b);
	printk("write fun called\n");
}

//EXPORT_SYMBOL(write_fun);
int init_hello(void)
{
	printk("started module ko\n");
	return 0;
}
void cleanup_hello(void)
{
	printk("ended module ko\n");
}

module_init(init_hello);
module_exit(cleanup_hello);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mirafraq");
MODULE_DESCRIPTION("A smaple driver");


