#include<stdio.h>
int main()
{
int i,j,c,n;
printf("enter array size");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i--,j=0;j<i;j++,i--)
{
c=arr[j];
arr[j]=arr[i];
arr[i]=c;
}
for(j=0;j<n;j++)
{
printf("%d",arr[j]);
}
}
