#include<stdio.h>
#define r 3
#define c 3

int main()
{
	int i,j;
	int arr[r][c];
	int arr2[r][c];
	int arr3[r][c];
	int sum=0;

	printf("enter the first matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("enter the second matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}

	int m;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(m=0;m<r;m++)
			{
				sum+=arr[i][m]*arr2[m][j];      //arr1 skips j & arr2 skips i so row(i)*col(j)
			}


			arr3[i][j]=sum;
			sum=0;
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

