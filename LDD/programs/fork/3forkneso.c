#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
fork();
printf("pid is %d\n",getpid());
}

