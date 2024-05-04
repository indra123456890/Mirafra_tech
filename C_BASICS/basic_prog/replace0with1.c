#include<stdio.h>
int main()
{
int n=10204,s=0,r=0;
while(n)
{
r=n%10;
if(r==0)
{
r=1;
}
s=(s*10)+r;
n=n/10;
}
n=s;
s=0;
while(n)
{
r=n%10;
s=(s*10)+r;
n=n/10;
}
printf("%d",s);
}
