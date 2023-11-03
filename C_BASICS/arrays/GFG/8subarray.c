/*Find Subarray with given sum | Set 1 (Non-negative Numbers)
Read
Discuss(350+)
Courses
Practice
Video
Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum.

Note: There may be more than one subarray with sum as the given sum, print first such subarray. 

Examples: 

Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Output: Sum found between indexes 2 and 4
Explanation: Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33*/

#include<stdio.h>
int main()
{
int a[6]={1,4,20,3,10,5};
int i,j,l,sum=33;
for(i=0;i<6;i++)
{
for(j=i+1;j<6;j++)
{
for(l=j+1;l<6;l++)
{
if(a[i]+a[j]+a[l]==sum)
{
printf("sum found between %d and %d ",i,l);
}
}
}
}}
