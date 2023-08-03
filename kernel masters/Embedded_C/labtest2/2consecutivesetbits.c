#include<stdio.h>
int main()
{
int n,c=0,p=0;
printf("enter num");
scanf("%x",&n);
while(n!=0)
{
if(n&0x1)
{
c++;
}
else
{
if(c>p)
{
p=c;
}
c=0;
}
n=n>>1;
}
if(c>p)
{
printf("%d",c);
}
else
{
printf("%d",p);
}
}
