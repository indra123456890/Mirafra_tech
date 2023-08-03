#include<stdio.h>
int main()
{
int a,b,units,m=100;
float bill;
printf("enter the no.of units:\n");
scanf("%d",&units);
switch(units<=200)
{
case 1:
printf("the power bill is %d",m);
break;
case 0:
switch(units>200&&units<401)
{
case 1:
a=units-200;
bill=100+a*0.65;
printf("Bill is %f",bill);
break;
case 0:
switch(units>400&&units<601)
{
case 1:
a=units-400;
bill=230+a*0.80;
printf("Bill is %f",bill);
break;
case 0:
switch(units>600)
{
case 1:
a=units-600;
bill=390+a*1.00;
printf("Bill is %f",bill);
break;
}
}
}
}
return 0;
}


