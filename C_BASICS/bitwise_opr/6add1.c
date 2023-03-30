#include<stdio.h>
int main()
{
int x;
printf("enter number\n");
scanf("%d",&x);
if(x>0)
{
x=-(~x);
}
printf("%d",x);
}
