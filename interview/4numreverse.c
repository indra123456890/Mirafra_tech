#include<stdio.h>
int main()
{
int n=1234,s=0,r;
while(n!=0)
{
r=n%10;
s=(s*10)+r;
n=n/10;
}
printf("%d",s);
}

