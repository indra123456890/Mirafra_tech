//BUBBLE SORT RECURSION

#include<stdio.h>
int *bsr(int a[],int n)
{
	static int x=1;
	int t,i;
	if(x==0)
		return a;
	x=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;x=1;
		}
	}
	return bsr(a,n-1);
}

int main()
{
	int i,n;

	printf("enter arr size:");
	scanf("%d",&n);

	int a[n];
	printf("%d elemnts:",n);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bsr(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
