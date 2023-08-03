#include<stdio.h>
int main()
{
int a,b;
printf("enter the number:");
scanf("%d",&a);
if(a<0)
{
b=(-a);
printf("magnitude of number is:%d",b);
}
else
printf("magnitude of number is:%d",a);
return 0;
}

