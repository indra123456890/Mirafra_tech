//sort an array to ascending order using bubble sort

#include<stdio.h>
int main()
{
int i,j;
int a[5]={2,4,1,6,3};
int temp;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}
