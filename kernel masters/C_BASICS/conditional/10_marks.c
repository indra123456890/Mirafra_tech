#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,m6;
float x,y,z;
printf("enter 6 subjects marks=");
scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
x=m1+m2+m3+m4+m5+m6;
y=x/600;
z=y*100;
if(80<=z)
{
if(z<=100)
{
printf("percentage is %f grade is Honours\n",z);
}
}
else
if(60<=z)
{
if(z<80)
{
printf("percentage is  %f grade is first division\n",z);
}
}
else
if(50<=z)
{
if(z<60)
{
printf("percentage is %f grade is second division\n",z);
}
}
else
if(40<=z)
{
if(z<50)
{
printf("percentage is %f grade is Third division\n",z);
}
}
else
if(0<=z)
{
if(z<40)
{
printf("percentage is %f grade is fail\n",z);
}
}
return 0;
}
