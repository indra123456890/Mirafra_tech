#include<stdio.h>
int main()
{
int n,r,s=0,d;
printf("enter the number");
scanf("%d",&n);
d=n;
while(n>0)
{
r=n%10;
n=n/10;
s=(s*10)+r;
}
if(d==s)
{
printf("it is palindrome");
}
else
{
printf("not a palindrome");
}
}
