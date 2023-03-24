#include<stdio.h>
int isprime(int n)
{
int i,c=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
c++;
}

if(c==2)
{
return 0;
}
return 1;
}


int main()
{
int n,b;
printf("enter number\n");
scanf("%d",&n);
b=isprime(n);
if(b==0)
{
printf("is prime number\n");
}
else
{
printf("not prime\n");
}
}

