#include <sys/types.h>
#include <signal.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<string.h>
int myatoi(char *s)
{
int i,n=0;
for(i=1;s[i]!='\0';i++)
{
n=(n*10)+s[i]-48;
}
return n;
}
void mykill(char *p,char *s)
{
int pid,r,S;
pid=atoi(p);
S=myatoi(s);
r=kill(pid,S);
if(r<0)
perror("killfailed\n");
}
int main(int argc,char *agv[])
{
mykill(agv[2],agv[1]);
}

