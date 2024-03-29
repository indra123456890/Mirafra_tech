//Rearrange the elements with alternate high and low
/*Given an integer array, rearrange it such that every second element becomes greater than its left and right elements. Assume no duplicate elements are present in the array.*/

/*Input:  {1, 2, 3, 4, 5, 6, 7}
Output: {1, 3, 2, 5, 4, 7, 6}
 
Input:  {9, 6, 8, 3, 7}
Output: {6, 9, 3, 8, 7}
 
Input:  {6, 9, 2, 5, 1, 4}
Output: {6, 9, 2, 5, 1, 4}*/


#include<stdio.h>
void rearrange(int a[])
{
	int i,j;
	for(i=1;i<5;i=i+2)
	{
		if(a[i-1]>a[i])
		{
			a[i]=a[i-1];
		}
		else if(a[i+1]>a[i])
		{
			a[i]=a[i+1];
		}
	}
	printf("%d",a[i]);
}

int main()
{
	int a[5]={1,2,3,4,5};
	rearrange(a);
}
