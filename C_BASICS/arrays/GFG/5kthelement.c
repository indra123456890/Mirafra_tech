/*Given an array and a number K where K is smaller than the size of the array. Find the K’th smallest element in the given array. Given that all array elements are distinct.

Examples:  

Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 3 
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 4 
Output: 10 */

#include<stdio.h>
int main()
{
int a[6]={3,4,7,10,15,20};
int i,j,c,k=3;
for(i=0;i<6;i++)
{
for(j=0;j<6;j++)
{
if(a[j]>a[j+1])
{
c=a[j];
a[j]=a[j+1];
a[j+1]=c;
}
}
}
if(a[i])
{
printf("%d",a[k-1]);
}
}

