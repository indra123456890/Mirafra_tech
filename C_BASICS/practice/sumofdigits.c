#include<stdio.h>
int main()
{
int n,r,s=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("%d",s);
}
