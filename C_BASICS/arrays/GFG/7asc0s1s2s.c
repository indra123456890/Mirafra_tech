/*Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.



Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
*/




#include<stdio.h>
int main()
{
int a[6]={0,1,2,0,1,2};
int i,j,temp;
for(i=0;i<6;i++)
{
for(j=0;j<6;j++)
{
if(a[j]>=a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<6;i++)
{
printf("%d",a[i]);
}
}
