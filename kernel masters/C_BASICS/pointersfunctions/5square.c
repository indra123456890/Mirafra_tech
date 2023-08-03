#include<stdio.h>
int *square(int a);
int main()
{
	int n,i,*p=0;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		p=square(a[i]);
		printf("%d ",*p);
	}
}
	int *square(int a)
	{
		static int x;
		x=a*a;
		return &x;
	}

