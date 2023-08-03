/*6) Given an array of n integers where n>1, return an array of same size an input array where at every index of the output array should contain the product of all elements in the array except the element at the given index. print the array in calling function. Create this array in called function dynamically.
Example:
arr[] = {10, 4, 1, 6, 2}
prod[] = {48,120,480,80,240}*/



#include<stdio.h>
#include<stdlib.h>
void p(int *a,int n,int *b)
{
	int i,x=1,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<n;k++)
	{
		x=1;

		for(i=0;i<n;i++)
		{
			if(i!=k)
			{
				x=x*a[i];
			}
		}
		b[k]=x;
	}
}


int main()
{
	int n,i;
	printf("enter no of elements");
	scanf("%d",&n);
	int*a=(int*)malloc(n*sizeof(int));
	int*b=(int *)malloc(n*sizeof(int));
	p(a,n,b);
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}

