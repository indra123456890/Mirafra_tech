#include<stdio.h>
int main()
{
	int n,j,i,m,t;
	printf("arr size:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n-1;i++)
	{
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[m])
			{
				m=j;
			}
		}
		if(m!=i)
		{
			t=a[i];
			a[i]=a[m];
			a[m]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
//Time complexity:worst case & best case O(n2)
