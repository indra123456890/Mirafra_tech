#include<stdio.h>
void fib(int n)
{
int a=0,b=1,c,i=0;
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
//printf("%d",c);
}

printf("%d",c);
}
int main()
{
int n=5;
fib(n);
return 0;
}
