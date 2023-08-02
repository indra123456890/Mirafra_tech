#include<stdio.h>
int *sr(int a[],int n)
{
	static int i=0;
	int j,t,m=i;
	if(i==(n-1))
	{
		return a;
	}
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
i++;
return sr(a,n);
}

int main()
{
	int n,j,i,m,t;
	printf("arr size:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	sr(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
