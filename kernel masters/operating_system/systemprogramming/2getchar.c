
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	char ch;
	int ret;
	write(1,"enter a character\n",17);
	ret=read(0,&ch,1);
	if(ret==-1)
	{
		perror("unable to read");
		exit(0);
	}
	else if(ret==0)
		printf("end of the file\n");
	else
		write(1,&ch,ret);
	return 0;
}
