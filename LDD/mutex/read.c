#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/ioctl.h>
//#include "header.h"
#include<linux/ioctl.h>


//#include "header.h"
//#define WR_DATA_IOW('i','9', char32_t)
//#define RD_DATA_IOR('i','10',char32_t)
int main()
{
	char rbuf[100];
	int fd;
	printf("IOCTL base char device driver operation from userspace..\n");
	fd=open("/dev/mutexlock",O_RDWR);
	if(fd==-1)
	{
		printf("open fails\n");
		exit(0);
	}

	read(fd,rbuf,strlen(rbuf));
	printf("%s",rbuf);
}

