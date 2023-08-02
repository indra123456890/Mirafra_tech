#include<stdio.h>
int main()
{
int n,j,i;
scanf("%d",&n);
for(i=0,j=3;i<j;i++,j--)
{
if((n&(1<<i))!=(n&(1<<j)))
{
n=n^(0x1<<j);
n=n^(0x1<<i);
}
}
printf("%d",n);
}
