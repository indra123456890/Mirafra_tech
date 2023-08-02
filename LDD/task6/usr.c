/*write 3 different strings into driver from app 1 mirafrs 2 technologes 3,hyderabad one by one 3 strings from usernow op shoul.d be mirafratechnologieshyderabad*/




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
	char rbuf[50];
	char wbuf[100];//={"mirafra technologies hyderabad"};
	/*char s1[100]={"mirafra"};
	  char s2[100]={"technologies"};
	  char s3[100]={"hyderabad"};*/
	int fd;
	fd=open("/dev/mydev2",O_RDWR);
	if(fd==-1)
	{
		printf("open fails\n");
		exit(0);
	}
	while(n<3)
	{
		scanf("%s",wbuf);
		write(fd,wbuf,strlen(wbuf));
		n++;
	}				
	//lseek(fd,0,SEEK_CUR);
	read(fd,rbuf,sizeof(rbuf));
	printf("received data is %s\n",rbuf);
	close(fd);
	exit(0);

}
