#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//#include<sys/types.h>
int mysystem(const char *s);
int main()
{
printf("Running ps with system\n");
mysystem("ps -eaf");
printf("Done\n");
exit(0);
}
int mysystem(const char * command)
{
int ret;
int status;
ret=fork();
if(ret==0)
{
ret=execl("/bin/sh", "sh", "-c",command, (char *) 0);
if(ret<0)
{
perror("exec fails");
exit(0);
}
else
{
wait(&status);
exit(0);
}
}
}


