#include<stdio.h>

int num(int n)
{
if(n==10)
return n;
printf("%d",n);
return num(n+1);
}
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
printf("%d",num(n));
}
