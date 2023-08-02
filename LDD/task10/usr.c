/*8.Restrict the size of buffer maximum to 1000 bytes in driver and do 7th program what is your observation*/


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
	char wbuf[1024];//={"mirafra technologies hyderabad"};
	/*char s1[100]={"mirafra"};
	  char s2[100]={"technologies"};
	  char s3[100]={"hyderabad"};*/
	int fd=open("/dev/my_8",O_RDWR);
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
	printf("data sent is %s\n",wbuf);
	printf("received data is %s\n",rbuf);
	
					
	//lseek(fd,0,SEEK_CUR);
	close(fd);
	exit(0);

}


