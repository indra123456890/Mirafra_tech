
#include<stdio.h>
int leapyear(int a)
{
int x;
if(a%4==0&&a%400==0)
x=1;
else
x=0;
return x;
}


int main()
{
int a,x;
printf("enter a value");
scanf("%d",&a);
x=leapyear(a);
if(x==1)
printf("leapyear\n");
else
printf("not leapyear\n");
}

