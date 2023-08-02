#include<stdio.h>
void *inrec(int a[],int n)
{
	static int i=1;
	int t=a[i],j=i-1;
	if(i==n)
		return a;
	for(;j>=0&&a[j]>t;j--)
	{
		a[j+1]=a[j];
	}
	a[j+1]=t;
	i++;
	return inrec(a,n);
}

int main()
{
	int n,j,i,t;
	printf("arr size:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	inrec(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
