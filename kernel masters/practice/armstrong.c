#include<stdio.h>
int main()
{
int n=153;
int a=n;
int s=0,r1,r;
while(n!=0)
{
r=n%10;
r1=r*r*r;
s=s+r1;
n=n/10;
}
if(a==s)
{
printf("is armstrong");
}
else
{
printf("not armstrong");
}
}
