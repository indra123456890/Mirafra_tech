#include<linux/cdev.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>
#include<linux/uaccess.h>

#define mem_size 1024
 #define SEEK_SET        0       /* seek relative to beginning
  of file */
 #define SEEK_CUR        1       /* seek relative to current f
 ile position */
 #define SEEK_END        2       /* seek relative to end of fi
 le */
 #define SEEK_DATA       3       /* seek to the next data */
 #define SEEK_HOLE       4       /* seek to the next hole */
 #define SEEK_MAX        SEEK_HOLE
char kbuf[100];
dev_t cdev;
struct cdev my_cdev;
static struct class *k_class;


static int my_open(struct inode *,struct file*);
static int my_release(struct inode *,struct file *);
static ssize_t my_read(struct file *,char __user *,size_t,loff_t *);
static ssize_t my_write(struct file *,const char __user*,size_t,loff_t *);
loff_t my_lseek(struct file *,loff_t,int);


static struct file_operations fops=
{
	.owner		=		THIS_MODULE,
	.open		=		my_open,
	.release	=		my_release,
	.read		=		my_read,
	.write		=		my_write,
	.llseek		=		my_lseek,
};


static int my_open(struct inode *inode,struct file *file)
{
printk("open successfully\n");
return 0;
}

static int my_release(struct inode *inode,struct file *file)
{
printk("release successfully\n");
return 0;
}

static ssize_t my_read(struct file *filp,char __user *buff,size_t len,loff_t *off)
{
int i,j;
for(i=0;kbuf[i]!='\0';i++)
{
j=i;
}
if(kbuf[i]=' ')
{
buff[i]=kbuf[i+1];
}
copy_to_user(buff,kbuf+*off,len);
printk("data sent to user is %s\n",buff);
return len;
}
static ssize_t my_write(struct file *filp,const char __user *buff,size_t len,loff_t *off)
{
printk("write successfully\n");
printk("the received data is:%s\n",buff);
copy_from_user(kbuf+*off,buff,len);//kernel to user
//*off=*off+7;
return 0;

}

loff_t my_lseek(struct file *file,loff_t off_set,int whelce)
{
loff_t new_off_set=0;
printk("lseek started\n");
if(whelce==SEEK_SET)
{
new_off_set=off_set;
}
else if(whelce==SEEK_CUR)
{
new_off_set=file->f_pos+off_set;
}
else
{
new_off_set=file->f_inode->i_size+off_set;
}
file->f_pos=new_off_set;
return new_off_set;
}

static int __init chr_driver_start(void)
{
if(alloc_chrdev_region(&cdev,0,1,"device1")<0)
{
printk(KERN_INFO"major and minor num not created\n");
return -1;
}
printk(KERN_INFO "major num:%d minor num:%d\n",MAJOR(cdev),MINOR(cdev));

cdev_init(&my_cdev,&fops);

//dding character device to system
if((cdev_add(&my_cdev,cdev,1)<0))
{
printk(KERN_INFO"cant add the device....\n");
}

//k_class=class_create(THIS_MODULE,"my_sync");

//device create

//device_create(k_class,NULL,cdev,NULL,"mydev9");
printk(KERN_INFO"device inserted properly\n");
return 0;
}

static void __exit chr_driver_exit(void)

{
cdev_del(&my_cdev);
class_destroy(k_class);
unregister_chrdev_region(cdev,1);
printk(KERN_INFO"device removed successfully\n");
}

module_init(chr_driver_start);
module_exit(chr_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MIRAFRA");
MODULE_DESCRIPTION("character Device Driver"); 
