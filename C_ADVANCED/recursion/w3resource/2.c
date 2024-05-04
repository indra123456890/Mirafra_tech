//write a program to calculzte sum if given 5 ans should be 15
#include<stdio.h>
int sum(int n)
{
static int s=0;
if(n==0)
return s;
else
s=s+n;
return sum(n-1);
}
int main()
{
int n=5;
printf("%d",sum(n));
}


