#include<stdio.h>
int main()
{
	int i,j,k;
	int r=5;
	for(i=1;i<5;i++)
	{
		for(k=1;k<r-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
