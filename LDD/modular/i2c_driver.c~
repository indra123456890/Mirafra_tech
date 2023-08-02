#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

void i2c_write(void);
EXPORT_SYMBOL(i2c_write);

void i2c_write()
{
	printk("i2c is called..in new ko");
}
int init_hello(void)
{
	printk("hello world indra mirafra new ko\n");
	return 0;
}
void cleanup_hello(void)
{
	printk("good bye indra mirafra new ko\n");
}

module_init(init_hello);
module_exit(cleanup_hello);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mirafra");
MODULE_DESCRIPTION("A sample driver");

