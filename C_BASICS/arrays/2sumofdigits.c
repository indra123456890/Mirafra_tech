#include<stdio.h>
int main()
{
int n=123,r,s=0;
while(n)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("%d",s);
}

