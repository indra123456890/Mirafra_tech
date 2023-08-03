#include <sys/types.h>
#include <signal.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<fcntl.h>
int w;
void myexit(void)
{
	char b[100],c='1';
	w=open("abc1.txt",O_WRONLY);
	write(w,&c,1);
}
int main()
{
	myexit();
}
