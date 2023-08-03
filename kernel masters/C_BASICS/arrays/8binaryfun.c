#include<stdio.h>
int i,k,x;
void binary(int a[],int k,int x);
int main()
{
	int k=0,x,n,i,b;
	printf("enter a number");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		n=n/2;
		k++;
	}
	int a[k];
	binary(a,k,x);
}
void binary(int a[],int k,int x)
{
	int b;
	for(i=0;i<k;i++)
	{
		b=x%2;
		x=x/2;
		a[i]=b;
	}
	for(i=k-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

