#include<stdio.h>
#define leap(y) y%4==0&&y%100||y%400==0
int main()
{
int d,m,y;
printf("enter the date");
scanf("%d%d%d",&d,&m,&y);
switch(m)

case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:

{
if(d>=1&&d<=31)
{
printf("valid date");
}
else
{
printf("in valid date");
}
break;

case 4:
case 6:
case 9:
case 11:

if(d>=1&&d<=30)
{
printf("valid date");
}
else
{
printf("invalid date");
}

case 2:

if(leap(y)&&d>=1&&d<=29)
{
printf("is leap year and valid date");
}
else if(d>=1&&d<=28)
{
printf("valid date");
}
else
{
printf("inavlid date");
}
}
}
 
