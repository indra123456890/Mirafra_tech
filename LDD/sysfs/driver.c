#include<stdio.h>
struct cdev my_cdev;
static int __init chr_driver_start(void)
{
//creating MAJOR and MINOR num
if(alloc_chrdev_region(&cdev,0,1,"sys1")<0)
{
printk(KERN_INFO"major num not created\n");
return -1;
}
printk(KERN_INFO "major num:%d minor num:%d\n",MAJOR(cdev),MINOR(cdev));

//creating cdev structure
cdev_init(&my_cdev,&fops);

//adding char device to system
if((cdev_add(&my_cdev,cdev,1)<0))
{
printk(KERN_INFO "cant add the device....");
}
k_class=class_create(THIS_MODULE,"mysys1");

//device create
device_create(k_class,NULL,cdev,NULL,"sys1");

printk(KERN_INFO "device inserted properly");
return 0;
}
