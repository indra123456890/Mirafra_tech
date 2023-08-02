#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{     
	char write_buf[40];
	char read_buf[40];
	int n;
	int fd;
	fd=open("/dev/my_dev1",O_RDWR);

	if(fd==-1)
{
		printf("open fails\n");
		exit(0);
}
	 
				printf("enter the string to write into the driver\n");
				scanf(" %[^\n]s",write_buf);
				

				printf("data is read successfully\n\n");
				write(fd,write_buf,sizeof(write_buf));	
				lseek(fd,8,SEEK_SET);
				
				//printf("done\n");
				
				read(fd,read_buf,100);

				
				printf("received data is %s\n",read_buf);

				close(fd);
				exit(0);
		}
	

