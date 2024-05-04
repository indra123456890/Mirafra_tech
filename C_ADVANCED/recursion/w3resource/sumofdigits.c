#include<stdio.h>
int sum(int n)
{
static int s=0;
int r;
if(n==0)
return s;
while(n!=0)
{
r=n%10;
s=s+r;
n=n/10;
}
return sum(n);
}
int main()
{
int n=25;
printf("%d",sum(n));
}
