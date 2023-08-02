#include<stdio.h>
int main()
{
int n=123,r,s=0;
while(n)
{
r=n%10;
n=n/10;
s=(s*10)+r;
}
printf("%d",s);
}
