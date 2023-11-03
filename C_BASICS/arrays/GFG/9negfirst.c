/*Move all negative numbers to beginning and positive to end with constant extra space
Read
Discuss(60+)
Courses
Practice
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5*/

#include<stdio.h>
int main()
{
int a[9]={-12,11,-13,-5,6,-7,5,-3,-6};
int i,j,c;
for(i=0;i<9;i++)
{
for(j=0;j<9;j++)
{
if(a[j]>a[j+1])
{
c=a[j];
a[j]=a[j+1];
a[j+1]=c;
}
}
}
for(i=0;i<9;i++)
{
printf("%d",a[i]);
}
}

