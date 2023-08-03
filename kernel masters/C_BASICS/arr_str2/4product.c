#include<stdio.h>
int main()
{
	int i,j,n,c=1;
	printf("enter arr size:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(i!=j)
				c*=a[i];
		}
		printf("%d ",c);
		c=1;

	}
	printf("\n");
}

