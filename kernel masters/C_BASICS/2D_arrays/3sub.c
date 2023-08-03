#include<stdio.h>
int main()
{
	int m1[3][4],m2[3][4],m3[3][4];
	int i,j;
		printf("enter matrix 1\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				scanf("%d",&m1[i][j]);
			}
		}
		printf("enter matrix 2\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				scanf("%d",&m2[i][j]);
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				m3[i][j]=m1[i][j]-m2[i][j];
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d\t",m3[i][j]);
			}
			printf("\n");
		}
}

