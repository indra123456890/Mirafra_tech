#include<stdio.h>
int main()
{
int n,i,j,c;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]>a[i])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
