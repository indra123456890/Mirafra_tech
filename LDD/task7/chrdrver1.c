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
int j=0;
char bu[100];
dev_t cdev;
struct cdev my_cdev;
static struct class *k_class;
uint8_t *kernel_buffer;

static int my_open(struct inode *,struct file *);
static int my_release(struct inode *,struct file *);
static ssize_t my_read(struct file *,char __user *,size_t,loff_t *);
static ssize_t my_write(struct file *,const char __user *,size_t ,loff_t *);
 loff_t my_lseek (struct file *, loff_t, int);


static struct file_operations fops =
{
		.owner        =         THIS_MODULE,
		.open         =         my_open,
		.release      =         my_release,
		.read         =         my_read,
		.write        =         my_write,
		.llseek       =		my_lseek,
};



static int my_open(struct inode *inode,struct file *file)
{
	printk("open successfully\n");
	return 0;
}

static int my_release(struct inode *inode,struct file *file)
{
	printk("released successfully\n");
	return 0;
}


static ssize_t my_read(struct file *filp,char __user *buff,size_t len,loff_t *off)
{
	int i;
	printk("reads successfully\n");
	printk("data is :%s\n",bu);
	/*for(i=0;i<len;i++)
	{
		buff[i]=bu[i+(*off)];
	}*/
	copy_to_user(buff,bu,sizeof(bu));//kernel to user
	
printk("data sent to user is %s\n",buff);
	return len;
}


static ssize_t my_write(struct file *filp,const char __user *buff,size_t len,loff_t *off)
{	
	printk("write successfully\n");
	printk("the received data is:%s\n",buff);
	copy_from_user(bu,buff,len);//user to kernel
//	bu=(char *)buff;
//	*off=*off+len;
	return 0;
}

loff_t my_lseek(struct file *file, loff_t off_set, int whelce)
{
	loff_t new_off_set=0;;
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

	/*creating MAJOR and MINOR num*/
	if(alloc_chrdev_region(&cdev,0,1,"mydev3")<0)
	{
		printk(KERN_INFO"major num is not created:\n");
		return -1;
	}
	printk(KERN_INFO"major num:%d  minor num:%d\n",MAJOR(cdev),MINOR(cdev));

	/*creatind cdev structure*/
	cdev_init(&my_cdev,&fops);

	

	/*adding char device to the system*/
	if((cdev_add(&my_cdev,cdev,1)<0))
	{
		printk(KERN_INFO"can't add the device..........\n");
	}	
	k_class=class_create(THIS_MODULE,"my_prog");

	//device create
	device_create(k_class,NULL,cdev,NULL,"mydev3");

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
MODULE_DESCRIPTION("Character Device Driver");


