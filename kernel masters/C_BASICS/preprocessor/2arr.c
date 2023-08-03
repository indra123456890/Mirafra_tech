/*2 Write down a macro to find the biggest of two numbers. Using this macro , implement array sorting.*/
#include<stdio.h>
#define n 5 
int main()
{
int j,i,c;
int a[n]={1,2,3,4,5};
printf("enter array numbers");
scanf("%d\n",n);
for(i=0;i<n;i++)
{
j=a[n];
}
for(j=i;j<n;j++,i--)
{
c=a[j];
a[j]=a[n];
a[n]=c;
}
}
