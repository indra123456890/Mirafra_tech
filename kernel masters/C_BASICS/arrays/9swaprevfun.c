#include<stdio.h>
int i,j,n,m;
void revswap(int arr1[],int arr2[]);
int main()
{
	printf("enter arr1 size:");
	scanf("%d",&n);
	printf("enter arr2 size:");
	scanf("%d",&m);

	int arr1[n];
	printf("enter array1 elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}

	int arr2[m];
	printf("enter array2 elements:");
	for(j=0;j<m;j++)
	{
		scanf("%d",&arr2[j]);
	}
	revswap(arr1,arr2);
}

void revswap(int arr1[],int arr2[])
{
	int c;	
	for(i=0,j=n-1;i<n&&j>=0;i++,j--)
	{
		c=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=c;
	}
	printf("after swap arr1:");
		for(i=0;i<n;i++)
		{
			printf(" %d",arr1[i]);
		}
		printf("\n");
	printf("after swap arr2:");
	for(j=0;j<m;j++)
	{
		printf(" %d",arr2[j]);
	}
	printf("\n");
}


