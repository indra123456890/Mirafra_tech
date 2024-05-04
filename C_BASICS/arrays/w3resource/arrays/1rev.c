#include<stdio.h>
int main()
{
int n=3;
int a[n];
int i,j;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1,j=0;i>=j;i--)
{
printf("%d",a[i]);
}
}
