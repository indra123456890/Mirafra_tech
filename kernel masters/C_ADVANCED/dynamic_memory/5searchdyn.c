#include<stdio.h>
#include<stdlib.h>
int search(int a[],int n,int m)
{
	int i,k=-1;
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			k=i;
			return k;
		}
	}
	return k;
}


int main()
{
	int n,m,i,p;
	printf("enter array size");
	scanf("%d",&n);
	int*a=(int*)malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements to search");
	scanf("%d",&m);
	p=search(a,n,m);
	printf("pos=%d\n",p);
}
