/*Write a program to reverse an array or string
Read
Discuss(210+)
Courses
Practice
 
Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}


#include<stdio.h>
int main()
{
int i,j,c[3],k=0;
int a[3]={1,2,3};
for(i=0;i<3;i++)
{
j=i;
}
for(i=k;j>=i;i++,j--)
{
c[i]=a[j];
}
printf("%d",c[i]);
}*/


#include<stdio.h>
int main()
{
int i,j,c[3],k=0;
int a[3]={1,2,3};
for(i=0;i<3;i++)
{
j=i;
}
for(i=j;i>=0;i--)
{
printf("%d",a[i]);
}
}
