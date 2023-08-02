/*write a program to enter string  from app the driver need to reverse the string and send back to user*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/ioctl.h>
#include "header.h"
#include<linux/ioctl.h>


#include "header.h"
//#define WR_DATA_IOW('i','9', char32_t)
//#define RD_DATA_IOR('i','10',char32_t)
int main()
{
	char buf[100],rbuf[100];
	char arg='$';
	int fd;
	printf("IOCTL base char device driver operation from userspace..\n");
	fd=open("/dev/ioctl1",O_RDWR);
	if(fd==-1)
	{
		printf("open fails\n");
		exit(0);
	}

	//sending the characters to the driver
	ioctl(fd,AUDIO_MM_PLAY,arg);

	ioctl(fd,AUDIO_MM_RECORD,buf);
	//rbuf[strlen(wbuf)]='\0';
	printf("received data is %s\n",buf);

	ioctl(fd,AUDIO_MM_Nextsong,rbuf);
	printf("received 5 chracters are %s\n",rbuf);

	//making kernel buffer all with stars*/
	ioctl(fd,AUDIO_MM_PREV,rbuf);

	//receving all stars from kernel buffr
//	ioctl(fd,AUDIO_MM_PREV,buf);
	printf("received from kernel buffer %s\n",rbuf);

	//lseek(fd,0,SEEK_CUR);
	close(fd);
	exit(0);
}

