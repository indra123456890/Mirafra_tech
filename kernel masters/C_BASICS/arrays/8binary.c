#include<stdio.h>
int main()
{
int i,n,x,k=0,b;
printf("enter number");
scanf("%d",&n);
x=n;
while(n!=0)
{
n=n/2;
k++;
}
int a[k];
for(i=0;i<k;i++)
{
b=x%2;
x=x/2;
a[i]=b;
}
for(i=k-1;i>=0;i--)
{
printf("%d",a[i]);
}
}
