#include <sys/types.h>
#include <signal.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
void mykill(char *p,char *s)
{
int pid,r,S;
pid=atoi(p);
S=s[1]-'0';
r=kill(pid,S);
if(r<0)
perror("killfailed\n");
}
int main(int argc,char *agv[])
{
mykill(agv[2],agv[1]);
}

