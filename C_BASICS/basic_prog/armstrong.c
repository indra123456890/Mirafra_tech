#include<stdio.h>
int main()
{
int n=120,s=0;
int r,a;
a=n;
while(n!=0)
{
r=n%10;
s=r*r*r+s;
n=n/10;
}
if(s==a)
{
printf("is armstrong");
}
else
{
printf("not armstrong");
}
}


