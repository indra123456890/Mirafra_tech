#include<stdio.h>
int main()
{
int x;
printf("enter the value");
scanf("%d",&x);
if(x<0)
{
printf("the %d is negative",x);
}
else
if(x>0)
{
printf("the %d is positive",x);
}
else
printf("the %d is zero",x);
return 0;
}
