//to modify the array that sent from main how to do it
#include<stdio.h>
int modifyarray(int b[],int n)
{
int i;
for(i=0;i<n;i++)
{
b[i]=i*2;
}
}

int main()
{
int a[5]={1,2,3,4,5};
int i;
modifyarray(a,5);
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}
