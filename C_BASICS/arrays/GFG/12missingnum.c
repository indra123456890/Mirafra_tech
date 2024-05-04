#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,6};
int b[6]={1,2,3,4,5,6};
int i=0,j=0;
for(i=0,j=0;i<5;i++,j++)
{
if(a[i]!=b[j])
{
printf("%d",b[j]);
}
}
}
