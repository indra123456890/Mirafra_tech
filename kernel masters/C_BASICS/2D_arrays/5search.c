/*5.Search for an element in a two dimentional array, and print its position - as row and column numbers*/
#include<stdio.h>
#define R 3
#define C 3
int main()
{
	int a[R][C];
	int m,i,j;
	printf("enter array elements");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements in matrix\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
}
	
	printf("enter element to search");
	scanf("%d",&m);
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(m==a[i][j])
			{
				printf(" pos of row: %d\n pos of column is:%d\n",i,j);
			}
		}
	}
}

