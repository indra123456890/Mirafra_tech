#include<stdio.h>
int main()
{
int a[5]={2,4,1,3,6};
int small,i;
small=a[0];
for(i=1;i<5;i++)
{
if(a[i]<small)
{
small=a[i];
}
}
printf("%d",small);
}
