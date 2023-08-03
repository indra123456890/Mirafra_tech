/*1Declare a two dimensional array of elements for sales details of a store, for each item, for each sales man. Take the sales values as input and print the array in matrix form.
Find out and print the following :
1 ) Total sales by each sales man
2 ) Total sales for a item
3 ) Total sales*/


#include<stdio.h>
#define R 3
#define C 4

int main()
{
	int s[R][C];
	int i,j,x=0,y=0,z=0,m=1,n=1;
	printf("enter values\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&s[i][j]);
		}
		}
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{
				x=x+s[i][j];
				y=y+s[i][j];
			}
			printf("total sales by %d sales man:%d\n",m,x);
			x=0;
			m++;
		}
		printf("total sales %d\n",y);
		for(j=0;j<C;j++)
		{
			for(i=0;i<R;i++)
			{
				z=z+s[i][j];
			}
			printf("total sales for %d item is %d\n",n,z);
			n++;
			z=0;
		}
	}

