/*7.wap to intialize 1k stars into driver and come back to 10th position and write sree embedded and go to the 100th position and write the string technologies then read the complete string and display from app*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
	int n=0,i;
	char rbuf[1030];
	char str[100]={"sree embedded"};
	char str1[100]={"technologies"};
	char wbuf[1030];//={"mirafra technologies hyderabad"};
	/*char s1[100]={"mirafra"};
	  char s2[100]={"technologies"};
	  char s3[100]={"hyderabad"};*/
	int fd=open("/dev/my_5",O_RDWR);
	if(fd<0)
	{
		printf("open fails\n");
		exit(0);
	}
	
for(i=0;i<1025;i++)
{
wbuf[i]='*';
}
		write(fd,wbuf,strlen(wbuf));
		lseek(fd,10,SEEK_SET);
		write(fd,str,strlen(str));
		lseek(fd,100,SEEK_SET);
		write(fd,str1,strlen(str1));
		read(fd,rbuf,strlen(wbuf));
		rbuf[strlen(wbuf)]='\0';
	printf("received data is %s\n",rbuf);
	
					
	//lseek(fd,0,SEEK_CUR);
	close(fd);
	exit(0);

}

