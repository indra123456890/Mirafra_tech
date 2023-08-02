/*Check if a subarray with 0 sum exists or not
Google Translate Icon
Given an integer array, check if it contains a subarray having zero-sum.

For example,

Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
 
Output: Subarray with zero-sum exists
 
The subarrays with a sum of 0 are:
 
{ 3, 4, -7 }
{ 4, -7, 3 }*/

#include<stdio.h>
int main()
{
	int a[10]={3,4,-7,3,1,3,1,-4,-2,-2};
	int i,j,k;
	for(i=0;i<10;i++)
	{
		int s=0;
		for(j=i;j<10;j++)
		{
			s=s+a[j];
		}
		if(s==0)
		{
			printf("sub array with zero sum found");
			for(k=i;k<=j;k++)
			{
				printf("%d,",a[k]);
			}
		}
	}
			return 0;
}
