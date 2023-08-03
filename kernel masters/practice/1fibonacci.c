#include<stdio.h>
int fib(int n)
{
static int i,a,b=1,c;
if(i>n)
{
return c;
}
c=a+b;
a=b;
b=c;
i++;
return fib(n);
}

int main()
{
int n;
scanf("%d",&n);
printf("%d\n",fib(n));
}
