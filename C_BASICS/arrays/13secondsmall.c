#include<stdio.h>
int main()
{
int a[4]={2,4,3,6};
int small;
int second;
small=a[0];
second=a[1];
int i;
for(i=2;i<=4;i++)
{
if(a[i]<small)
{
second=small;
small=a[i];
}
else if(a[i]<second)
{
second=a[i];
}
}
printf("%d",second);
}
