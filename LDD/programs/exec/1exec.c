#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
char *args[]={"hello","hi",NULL};
printf("enter message");
printf("my pid %d\n",getpid());
execv("./2exec",args);
printf("back to exec1");
}
