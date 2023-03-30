#include<stdio.h>
int main()
{
int n;
printf("enter a number\n");
scanf("%d",&n);
if(n&(0x01))
{
printf("odd");
}
else
{
printf("even");
}
}
