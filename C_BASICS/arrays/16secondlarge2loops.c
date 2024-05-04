#include<stdio.h>
int main()
{
int a[5]={4,2,6,1,8};
int fl,sl;
fl=a[0];
sl=a[0];
int i,k;
for(i=1;i<5;i++)
{
if(a[i]>fl)
{
fl=a[i];
k=i;
}
}
printf("%d",fl);
for(i=1;i<5;i++)
{
if(i==k)
continue;
if(a[i]>sl)
sl=a[i];
}
printf("%d",sl);
}
