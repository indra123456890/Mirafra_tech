#include <signal.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<fcntl.h>
void mywait(void)
{
	int w;
	char b[1];
	while(1)
	{
		w=open("abc1.txt",O_RDONLY);
		read(w,b,1);
		write(1,b,1);
		if(b[0]=='1')
		{
			break;
		}
		close(w);
	}
}
int main()
{
	mywait();
}

