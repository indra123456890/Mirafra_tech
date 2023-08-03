#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
char myshell(const char *command)
{
	int ret=0;
	int status;
	ret=fork();
	if(ret==0)//child process
	{
	
		ret=execl("/bin/sh","sh","-c",command,(char *) 0);
		if(ret==-1)
		{
			perror("fails");
			exit(0);
		}
	}
	else
	{
		wait(&status);//parent process
	//	exit(0);
	}
}

int main()
{
	char sh[50];
	while(1)
	{
		printf("$");
		scanf(" %[^\n]s",sh);
		myshell(sh);
		printf("Done");
	}
		exit(0);
}

