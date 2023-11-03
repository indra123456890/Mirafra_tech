/*Find a peak element which is not smaller than its neighbours

Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.

Note: If the array is increasing then just print the last element will be the maximum value.

Example:

Input: array[]= {5, 10, 20, 15}
Output: 20
Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20.*/



#include<stdio.h>
int main()
{
int a[4]={5,10,20,15};
int i=0;
while(a[i])
{
if((a[i]<a[i+1])&&(a[i+1]>a[i+2]))
{
printf("%d",a[i+1]);
break;
}
i++;
}
}
