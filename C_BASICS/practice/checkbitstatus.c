#include<stdio.h>
int main()
{
int n,p;
scanf("%d%d",&n,&p);
if(n&(1<<p)==1)
{
printf("bit is set");
}
else
{
printf("bit is clear");
}
}
