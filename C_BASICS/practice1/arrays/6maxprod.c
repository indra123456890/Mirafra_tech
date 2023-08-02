
//find maximum product of two integers in array

#include<stdio.h>
int main()
{
int a[5]={-10,-3,5,6,-2},i,j,m,k,l;
int d=0;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(d<a[i]*a[j])
{
d=a[i]*a[j];
k=i;
l=j;
}
}
}
printf("%d %d",a[k],a[l]);
}

