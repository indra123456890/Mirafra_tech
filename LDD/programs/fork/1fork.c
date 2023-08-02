#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int q;
q=fork();
if (q<0)
{
printf("perror %d",q);
}
if(q==0)
{
printf("child created %d",getpid());
}
else if(q>0)
{
printf("parent id %d",getppid());
}
}



