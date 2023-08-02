#include<stdio.h>
int main()
{
int n,p;
scanf("%d%d",&n,&p);
//n=n|(1<<p);
//n=n&(~(1<<p));
n=n^(1<<p);
//printf("afters set:%d",n);
//printf("after clear:%d",n);
printf("after toggle %d",n);
}
