#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
printf("helloexec\n");
printf("my pid:%d\n",getpid());

printf("my arguments:");
for(int i=0;i<argc;i++)
{
printf("%s",argv[i]);
}
return 0;
}

