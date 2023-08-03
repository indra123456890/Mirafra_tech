#include<stdio.h>
#define s(n) for(i=0;i<n;i++)\
{\
printf("%d",a[i]);\
}\
{
int main()
{
int i,n;
printf("enter size of an array:\n");
scanf("%d",&n);
int a[n];
printf("enter an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
s(n)
printf("\n");
}
}
