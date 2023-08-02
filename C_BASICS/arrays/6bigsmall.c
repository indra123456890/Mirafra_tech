#include<stdio.h>
int main()
{
int a[10],i,n,big,small;
printf("enter size of array");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
big=a[0];
small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>big)
big=a[i];
if(a[i]<small)
small=a[i];
}
printf("big element is %d",big);
printf("small element is %d",small);
}

