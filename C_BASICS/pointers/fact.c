#include<stdio.h>
void findfact(int n,int *f)
{
int i;
for(i=1;i<=n;i++)
{
*f=*f*i;
}
}
int main()
{
int fact=1;
int n=5;
findfact(n,&fact);
printf("%d",fact);
}
