#include<stdio.h>
int revnum(int n)
{
static int s=0;
int r;
if(n==0)
return s;
while(n!=0)
{
r=n%10;
s=(s*10)+r;
n=n/10;
}
return revnum(n);
}
int main()
{
int n=1234;
printf("%d",revnum(n));
}
