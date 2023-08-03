#include<stdio.h>
int main()
{
int a,b;
printf("enter the values\n");
scanf("%d%d",&a,&b);
switch(a>b)
{
case 1:
printf("The bigger number is %d",a);
                                break;
case 0:
printf("The bigger number is %d",b);
}
return 0;
}
