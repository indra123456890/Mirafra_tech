#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/cdev.h>

dev_t dev=MKDEV(323,1);



static int __init_driver(void)
{
register chrdev_region(dev,0,"DEVICE");
printk("%d %d\n",MAJOR(dev),MINOR(dev));
printk("driver inserted\n");
}

static int __exit_driver(void)
{
unregister chrdev_region(dev,1);
printk("Driver removed\n");
}


module__init(init_driver);
module__exit(exit_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mirafra");
MODULE_DESCRIPTION("A sample driver"); 

