/*Program to find the minimum (or maximum) element of an array

Given an array, write functions to find the minimum and maximum elements in it. 

The most simplest way to find min and max value of an element is to use inbuilt function sort() in java. So, that value at 0th position will min and value at nth position will be max.*/



#include<stdio.h>
int main()
{
int a[6]={15,5,10,1,20,16};
int i,min,max;
min=a[0];
max=a[0];
for(i=1;i<6;i++)
{
if(a[i]<=min)
{
min=a[i];
}
}
for(i=1;i<6;i++)
{
 if(a[i]>max)
{
max=a[i];
}
}
printf("%d %d",min,max);
}
