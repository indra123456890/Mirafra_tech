#include<stdio.h>
int main()
{
int a,b;
printf("enter the numbers");
scanf("%d%d",&a,&b);
a>b?printf("the %d number is greater",a):printf("the %d number is bigger",b);
return 0;
}
