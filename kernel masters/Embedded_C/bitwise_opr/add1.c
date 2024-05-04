#include<stdio.h>
int main()
{
int a,b,x;
printf("enter number");
scanf("%d",&a);
printf("enter  umber 2");
scanf("%d",&b);
x=(a-(~b)-1);
printf("%d",x);
}
