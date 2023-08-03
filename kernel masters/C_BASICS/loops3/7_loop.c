#include<stdio.h>
int main()
{
	int c,i,j,n=5;
	for(i=1,j=1;i<=n;i++)
	{
		for(c=1;c<=i;c++,j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
