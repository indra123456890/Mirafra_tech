#include<stdio.h>
int main()
{
int a[5]={2,4,1,5,6};
int i,j,c;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]>a[j+1])
{
c=a[i];
a[i]=a[j+1];
a[j+1]=c;
}
}
}
printf("%d",a[0]);
}
