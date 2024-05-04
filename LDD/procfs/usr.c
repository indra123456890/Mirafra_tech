#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/ioctl.h>
int main()
{

	char rbuf[100];
	char wbuf[100]={"*"};
	//int opt;
	int fd;
	fd=open("/proc/etx/etx_proc",O_RDWR);
	if(fd==-1)
	{
		printf("open fails\n");
		exit(0);
	}
//	while(1)
//	{
//	scanf("%d",&opt);
//	switch(opt)
//	{
//	case '1':
//		printf("enter the string to write into driver");
//		scanf("%s",wbuf);
//		printf("data writing.....");
		write(fd,wbuf,strlen(wbuf)+1);
//		printf("DOne");
//		break;
//	case '2':
//	printf("Data Reding...");
	read(fd,rbuf,1024);
//	printf("DOne...");
	printf("Data=%s\n",rbuf);
//	break;
//	case '3':
	close(fd);
	exit(0);
}

