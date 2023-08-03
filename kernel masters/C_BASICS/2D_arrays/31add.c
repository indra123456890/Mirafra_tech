//3	Write a program  for matrix addition and subtraction.

#include<stdio.h>
#define r 3
#define c 4

int main()
{
	int i,j;
	int arr[r][c];
	int arr2[r][c];
	int arr3[r][c];
	int arr4[r][c];

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

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr3[i][j]=arr[i][j]+arr2[i][j];
			arr4[i][j]=arr[i][j]-arr2[i][j];
		}
	}
	
	// printing addition
	printf("the addition is\n"); 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr3[i][j]);
			
		}

		printf("\n");
	}

	// printing sub
	printf("the substraction is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr4[i][j]);

		}
		printf("\n");
	}

}

