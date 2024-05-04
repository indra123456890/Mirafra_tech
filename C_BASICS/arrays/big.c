#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int big,i;
big=a[0];
for(i=1;i<=4;i++)
{
if(a[i]>big)
{
big=a[i];
}
}
printf("%d",big);
}
