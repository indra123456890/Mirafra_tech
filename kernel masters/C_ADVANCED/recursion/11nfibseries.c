#include<stdio.h>
int fibseries(int n)
{
static int a=1,b=1,c;
if(n==0)
{
return 0;
}
else
{
a=b;
b=c;
c=a+b;
printf("%d",c);
}
fibseries(n-1);
}

int main()
{
int n;
printf("enter term position");
scanf("%d",&n);
fibseries(n);
}
