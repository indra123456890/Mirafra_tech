#include<stdio.h>
int main()
{
int a[6]={1,2,3,2,4,3};
int i,j;
for(i=0;i<6;i++)
{
for(j=i+1;j<6;j++)
{
if(a[i]==a[j])
{
printf("%d",a[j]);
}
}
}
}
