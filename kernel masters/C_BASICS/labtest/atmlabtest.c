
#include<stdio.h>
int main()
{
int a,b,c,d,e,x,y,z,f,g;
printf("enter the amount of withdraw:");
scanf("%d",&a);
if(a%50!=0)
{
printf("please enter the amount in denominations of 50 only.\n");
}
else
{
printf("Money dispensed as follows:\n");

x=a%2000;
y=x%500;
z=y%200;
f=z%100;

b=a/2000;
c=x/500;
d=y/200;
e=z/100;
g=f/50;

printf("No of 2000/- Notes:%d\n",b);
printf("No of 500/- Notes:%d\n",c);
printf("No of 200/- Notes:%d\n",d);
printf("No of 100/- Notes:%d\n",e);
printf("No of 50/- Notes:%d\n",g);
}
return 0;
}
