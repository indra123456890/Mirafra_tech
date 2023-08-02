#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
//       #include <unistd.h>


int main(int argc,char *argv[])
{
	int q;
	q=fork();
	if(q<0)
	{
		perror("fork failed");
	}
		printf("child created %d\n",getpid());
	if(q==0)
	{
		//printf("child created %d",getpid());
		char *args[]={"./add","a","b",NULL};
		execv("./add",args);
	}
	else
	{
		return 0;
	}
}
