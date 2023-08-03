#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("enter no of elements\n");
	scanf("%d",&n);
	int arr1[n];
	int arr2[n];
	printf("enter array elements\n");
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr1[i]);
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[j]);
		}
		for(i=n-1,j=0;j<n;j++,i--)
		{
			temp=arr1[i];
			arr1[i]=arr2[j];
			arr2[j]=temp;
		}
		for(i=0;i<n;i++)
		{
			printf("%d",arr1[i]);
		}
		for(j=0;j<n;j++)
		{
			printf("%d",arr2[j]);
		}
	}
}
