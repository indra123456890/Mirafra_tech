#include<stdio.h>
int main()
{
int a[6]={1,0,1,0,0,1};
int i,j;
for(i=0;i<3;i++)
{
if(a[i]==1||a[i]==0)
{
a[i]=0;
j=i;
}
}
for(j=j+1;j<6;j++)
{
if(a[j]==1||a[j]==0)
{
a[j]=1;
}
}
for(i=0;i<6;i++)
{
printf("%d",a[i]);
}
}
