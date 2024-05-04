#include<stdio.h>
int count(int n)
{
static int c=0;
if(n==0)
return c;
while(n!=0)
{
n=n/10;
c++;
}
return count(n);
}

int main()
{
int n=1234;
printf("%d",count(n));
}
