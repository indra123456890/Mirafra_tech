#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
printf("now we are in exec2\n");
printf("pid of exec2=%d\n",getpid());
return 0;
}
