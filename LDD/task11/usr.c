/*3.write /insert/push the string "technologies" after the string "mirafra" before the string "hyderabad" and read all 
op :mirafra technologies hyderabad".*/


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
	char wbuf[100]={"mirafra hyderabad"};
	//char s1[100]={"mirafra"};
	  char s1[100]={"technologies"};
	 
	int fd;
	fd=open("/dev/device1",O_RDWR);
	if(fd==-1)
	{
		printf("open fails\n");
		exit(0);
	}
	

		write(fd,wbuf,strlen(wbuf));			
	        lseek(fd,8,SEEK_SET);
		write(fd,s1,strlen(s1));
		lseek(fd,18,SEEK_SET);
		write(fd,wbuf,strlen(wbuf));
		read(fd,rbuf,sizeof(rbuf));
		printf("received data is %s\n",rbuf);
		close(fd);
		exit(0);

	}

