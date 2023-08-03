#include<stdio.h>
int main()
{
int a;
float b,c,d;
printf("enter number of units=");
scanf("%d",&a);
b=a-200;
c=a-400;
d=a-600;
if(a<=200)
{
printf("the bill is 100 rs\n");
}
else
if(201<=a)
if(a<=400)
{
printf("the bill is %.2f\n rs",100+(b*0.65));
}
else
if(401<=a)
if(a<=600)
{
printf("the bill is %.2f\n rs",230+(c*0.80));
}
else
if(a>=601)
{
printf("the bill is %.2f\n rs",390+(d*1.00));
}
return 0;
}
