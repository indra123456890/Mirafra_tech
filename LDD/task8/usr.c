/*write a program to enter string  from app the driver need to reverse the string and send back to user*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{

	char rbuf[100];
	char wbuf[100]={"mirafra technologies hyderabad"};
	/*char s1[100]={"mirafra"};
	  char s2[100]={"technologies"};
	  char s3[100]={"hyderabad"};*/
	int fd;
	fd=open("/dev/mydev4",O_RDWR);
	if(fd==-1)
	{
		printf("open fails\n");
		exit(0);
	}
	write(fd,wbuf,strlen(wbuf));
	read(fd,rbuf,strlen(wbuf));
	//rbuf[strlen(wbuf)]='\0';
	printf("received data is %s\n",rbuf);


	//lseek(fd,0,SEEK_CUR);
	close(fd);
	exit(0);
}
