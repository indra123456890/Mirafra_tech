//Insert element in sorted list(array)

#include<stdio.h>
int main()
{
int a[6]={2,5,7,9,11};
int n=8;
int i,j;
for(i=0;i<6;i++)
{
if(n<a[i])
{
j=a[i+1];
a[i+1]=a[i];
a[i]=n;
a[i+2]=j;
break;
}
}
for(i=0;i<6;i++)
{
printf("%d",a[i]);
}
}
