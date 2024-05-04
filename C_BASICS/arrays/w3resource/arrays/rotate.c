#include<stdio.h>
int main()
{
int n=15;
int a[15]={0,3,6,9,12,14,18,20,22,25,27};
int i=0,j=11,k=0;
while(i<4&&j<n)
{
a[j]=a[i];
i++;
j++;
}
for(i;i<j;i++)
{
a[k]=a[i];
k++;
}
for(i=0;i<k;i++)
{
printf("%d",a[i]);
}
}
