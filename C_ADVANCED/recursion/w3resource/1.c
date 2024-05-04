//prog to print first 50 natural numbers
#include<stdio.h>
int number(int n)
{
if(n==50)
return n;
printf("%d\n",n);
return number(n+1);
}
int main()
{
int n=1;
printf("%d",number(n));
}

