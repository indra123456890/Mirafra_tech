#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>

int main(int argc,char *argv [])
{
int ret,fd;
char buffer[1000];

fd=open(argv[1],O_RDONLY);
if(fd<0)
{
perror("open fail");
}
while(1)
{
ret=read(fd,buffer,1000);
ret=write(1,buffer,ret);
if(ret==0)
break;
}
close(fd);
}
