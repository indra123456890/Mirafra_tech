#include<stdio.h>
int main()
{
unsigned int n;
printf("enter a number");
scanf("%d",&n);
if(((n>>31)&1)==1)
{
printf("is negative number");
}
else
{
printf("not negative number");
}
}
