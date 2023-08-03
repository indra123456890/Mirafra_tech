#include<stdio.h>
int main()
{
int units,a;
float bill;
printf("enter the units:");
scanf("%d",&a);
if(a<=200)
{
bill=100;
printf("%f amount upto 200 units",bill);
}
else
 if(a>=201&&a<=400)
{
a=units-200;
bill=100+(a*0.65);
printf("%f amount is ",bill);
}
else
 if(a>=401&&a<=600)
{
a=units-400;
bill=200+(a*0.80);
printf(" amount is  %f",bill);
}
else 
if(a>=601)
{
a=units-600;
bill=390+(a*1.00);
printf(" amount is %f",bill);
}
return 0;
}
