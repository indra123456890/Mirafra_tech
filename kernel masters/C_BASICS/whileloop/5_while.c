#include<stdio.h>
int main()
{
int i=1,n,m1,m2,m3,m4,m5,m6;
float x,y,z;
printf("enter no of students:");
scanf("%d",&n);
while(i<=n)
{
printf("enter 6 subjects marks:");
scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
x=m1+m2+m3+m4+m5+m6;
z=(x/600)*100;
if(z>=80)
{
printf("Honours.\n");
}
else
if(z>=60)
{
printf("First division.\n");
}
else
if(z>=50)
{
printf("Second division.\n");
}
else
if(z>=40)
{
printf("Third Division.\n");
}
else
if(z<40)
{
printf("Fail.\n");
}
i++;
}
return 0;
}

