#include<stdio.h>
int main()
{
int calls,a;
float bill,cost;
printf("enter a given number:");
scanf("%d",&calls);
a=calls-100;
if(calls>100)
{
bill=250+(a*1.25);
printf("%f enter amount after 100 calls:",bill);
}
else
if(calls=100)
{
bill=250;
printf("%f bill amount upto 100 calls:",bill);
}
return 0;
}
