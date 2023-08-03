#include<stdio.h>
#define r 3
#define c 2
int main()
{
int i,j;
int m1[r][c],m2[r][c];
printf("enter matrix 1\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&m1[i][j]);
	}
}
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
		m2[i][j]=m1[j][i];
	}
}
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
		printf("%d\t",m2[i][j]);
	}

	printf("\n");

}
}
