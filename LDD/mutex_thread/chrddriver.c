#include<linux/cdev.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>
#include<linux/uaccess.h>
#include<linux/slab.h>
#include<linux/ioctl.h>
#include<linux/string.h>
#include<linux/completion.h>
#include<linux/mutex.h>
#include<linux/delay.h>
#include<linux/kthread.h>
struct mutex chr_mutex;
unsigned long chr_mutex_var=0;

#define mem_size 1024

#define size 100
//#define newsize 10

#define SEEK_SET        0       /* seek relative to beginning
				   of file */
#define SEEK_CUR        1       /* seek relative to current f
				   ile position */
#define SEEK_END        2       /* seek relative to end of fi
				   le */
#define SEEK_DATA       3       /* seek to the next data */
#define SEEK_HOLE       4       /* seek to the next hole */
#define SEEK_MAX        SEEK_HOLE
//defining the ioctl code




//char kbuf[100];
//char new[];
//int newsize=10;
dev_t cdev;
struct cdev my_cdev;
static struct class *k_class;
static struct task_struct *chr_thread1;
static struct task_struct *chr_thread2;

static int my_open(struct inode *,struct file *);
static int my_release(struct inode *,struct file *);
//static ssize_t my_read(struct file *,char __user *,size_t,loff_t *);
//static ssize_t my_write(struct file *,const char __user *,size_t ,loff_t *);
//loff_t my_lseek (struct file *, loff_t, int);
//static long my_ioctl(struct file*file,unsigned int cmd,unsigned long arg);
int thread_fun1(void *p);
int thread_fun2(void *p);

int thread_fun1(void *p)
{
while(!kthread_should_stop())
{
mutex_lock(&chr_mutex);
chr_mutex_var++;
printk(KERN_INFO"in thread func1 %lu\n",chr_mutex_var);
mutex_unlock(&chr_mutex);
msleep(100);
}
return 0;
}

int thread_fun2(void *p)
  {
  while(!kthread_should_stop())
  {
  mutex_lock(&chr_mutex);
  chr_mutex_var++;
  printk(KERN_INFO"in thread func2 %lu\n",chr_mutex_var);
  mutex_unlock(&chr_mutex);
  msleep(100);
  }
  return 0;
  }




static struct file_operations fops =
{
	.owner        =         THIS_MODULE,
	.open         =         my_open,
	.release      =         my_release,
//	.read         =         my_read,
//	.write        =         my_write,
	//.llseek       =		my_lseek,
	//.unlocked_ioctl=	my_ioctl,
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


/*static ssize_t my_read(struct file *filp,char __user *buff,size_t len,loff_t *off)
{
	printk("reads successfully\n");
	printk("data is :%s\n",buff);

	copy_to_user(buff,kbuf,strlen(kbuf));//kernel to user

	printk("data sent to user is %s\n",buff);
	return len;
}


static ssize_t my_write(struct file *filp,const char __user *buff,size_t len,loff_t *off)
{	
	printk("write successfully\n");
	printk("the received data is:%s\n",buff);
	copy_from_user(kbuf,buff,strlen(buff));//user to kernel
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
}*/




  
/*static long my_ioctl(struct file *file,unsigned int cmd,unsigned long c)
{
char *new;
	int i;
	//kbuf=kmalloc(100,GFP_KERNEL);
	
			//printk("KK%ld\n",sizeof(kbuf));
	switch(cmd)
	{
		case AUDIO_MM_PLAY:

			for(i=0;i<100;i++)
			{
				kbuf[i]=c;
			}
			kbuf[i]='\0';
			printk("%s\n",kbuf);
			
			//printk("%d\n",strlen(kbuf));
			
			//printk("KK%ld\n",sizeof(kbuf));
//copy_from_user(&c,(char *)arg,sizeof(char));;
			//printk(KERN_INFO "c=%c\n",c);
			break;

		case AUDIO_MM_RECORD:
			//printk("KK%s\n",kbuf);
			copy_to_user((char*)c,kbuf,20);
		//	printk("KK::C::%s\n",(char*)c);
			break;
			
		case AUDIO_MM_Nextsong:

			new=kmalloc(10*sizeof(char),GFP_KERNEL);
			memcpy(new,kbuf,10*(sizeof(char)));
			kfree(kbuf);
			kbuf=(char *)new;
			copy_to_user((char *)c,kbuf,5);
			printk("case 3%s\n",kbuf);
			printk("case 3 %ld\n",sizeof(kbuf));
			break;

		case AUDIO_MM_PREV:
			for(i=0;i<99;i++)
			{
				kbuf[i]='*';
			}
			//kbuf[i]='\0';
			printk("case 4%s\n",kbuf);

			copy_to_user((char*)c,kbuf,size);
			printk("after copy%s\n",(char*)c);
			break;
	}
	return 0;
}*/

static int __init chr_driver_start(void)
{
	/*creating MAJOR and MINOR num*/
	if(alloc_chrdev_region(&cdev,0,1,"mutex")<0)
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
		k_class=class_create(THIS_MODULE,"mutex");

	//device create
		device_create(k_class,NULL,cdev,NULL,"mutex");


//intializing mutex
mutex_init(&chr_mutex);

//creating thread1
chr_thread1=kthread_run(thread_fun1,NULL,"mutex thread1");
if(chr_thread1)
{
printk(KERN_INFO"kernel thread created successfully..\n");
}
else
{
printk(KERN_INFO"unable to create theread..\n");
}

//creating thread2
chr_thread2=kthread_run(thread_fun2,NULL,"mutex thread2");
if(chr_thread2)
{
printk(KERN_INFO"therad 2 ceated..\n");
}
else
{
printk(KERN_INFO"unable to create threead..\n");
}

	printk(KERN_INFO"device inserted properly\n");
	return 0;
}

static void __exit chr_driver_exit(void)
{
kthread_stop(chr_thread1);
kthread_stop(chr_thread2);	
device_destroy(k_class,cdev);
		class_destroy(k_class);
	cdev_del(&my_cdev);
	unregister_chrdev_region(cdev,1);
	printk(KERN_INFO"device removed successfully\n");
}



module_init(chr_driver_start);
module_exit(chr_driver_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("MIRAFRA");
MODULE_DESCRIPTION("Character Device Driver");


