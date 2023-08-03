#include<stdio.h>
int main()
{
int a,b;
printf("enter the values");
scanf("%d%d",&a,&b);
switch(a>b)
{
case 1:
printf("%d it is biggest\n",a);
break;
case 0:
printf("%d it is biggest\n",b);
break;
}
}
