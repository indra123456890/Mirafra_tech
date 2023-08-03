#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
char buffer[1000];
int fd,i=0,f1,c=0;
fd=open(argv[1],O_RDONLY);
if(fd<0)
{
perror("open fails");
}
f1=read(fd,buffer,1000);
for(i=0;i<f1;i++)
{
if(buffer[i]=='\n')
{
c++;
}
if(c==10)
break;
}
write(1,buffer,i);
close(fd);
}
