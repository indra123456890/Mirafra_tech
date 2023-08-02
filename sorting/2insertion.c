#include<stdio.h>
int main()
{
	int n,j,i,t;
	printf("arr size:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0&&a[j]>t)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
//Time complexity:worst case:O(n2)
//Best case:best case:O(n)
