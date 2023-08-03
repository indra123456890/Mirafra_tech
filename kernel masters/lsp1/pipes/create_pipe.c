#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>


int mysystem(const char *command);
int main(int argc,char *argv[])
{

	printf("running command with system\n");
	mysystem(argv[1]);
	printf("Done");
	exit(0);
}


int mysystem(const char *command)
{

	int ret;

	ret=fork();
	int status;
	if(ret==0)
	{
		ret=execl("/bin/sh","sh","-c","mknod abc_pipe",NULL);

		if(ret==-1)
		{
			perror("excel fails");
			exit(0);
		}

	}
	else
		wait(&status);
}



