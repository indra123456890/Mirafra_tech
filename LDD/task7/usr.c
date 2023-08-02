/*write the above string sepertely and read them seperately from the driver(implement write and read consecutively*/


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
	char rbuf[100];
	char wbuf[100];//={"mirafra technologies hyderabad"};
	/*char s1[100]={"mirafra"};
	  char s2[100]={"technologies"};
	  char s3[100]={"hyderabad"};*/
	int fd;
	fd=open("/dev/mydev3",O_RDWR);
	if(fd==-1)
	{
		printf("open fails\n");
		exit(0);
	}
	while(n<3)
	{
		scanf("%s",wbuf);
		write(fd,wbuf,strlen(wbuf));
		read(fd,rbuf,strlen(wbuf));
		rbuf[strlen(wbuf)]='\0';
	printf("received data is %s\n",rbuf);
n++;
}
	
					
	//lseek(fd,0,SEEK_CUR);
	close(fd);
	exit(0);

}

