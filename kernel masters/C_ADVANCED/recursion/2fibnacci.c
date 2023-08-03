#include<stdio.h>
int fib(int n)
{
if(n==1||n==2)
{
return 1;
}
else
{
return fib(n-1)+fib(n-2);
}
}

int main()
{
int n;
printf("enter nth term position");
scanf("%d",&n);
printf("the value in %d nth term pos is %d",n,fib(n));
//getchar();
}

