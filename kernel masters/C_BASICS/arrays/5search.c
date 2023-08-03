#include<stdio.h>
int main()
{
	int i,n,m,j=0;
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d numbers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter numbers to search");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(m==arr[i])
		{
			printf("%d find the %d position",m,i);
			j++;
		}
	}
	printf("%d repeated times:%d\n",m,j);
}
