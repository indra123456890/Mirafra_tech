#include<stdio.h>
int main()
{
int i,n,j=0;
printf("enter size");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{  
if(a[i]!=0)
{
a[j++]=a[i];
}
}
for(i=j;i<n;i++)
{
a[i]=0;
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

