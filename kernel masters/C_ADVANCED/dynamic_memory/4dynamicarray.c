/*4) Create the array dynamically, read the data for the array, and use the above function in Q3 to find the biggest number in that array.*/


#include<stdio.h>
#include<stdlib.h>
int big(int *a,int n)
{
	int t,i,big;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			big=a[i];
			t=i;
		}
		if(big<a[i])
		{
			big=a[i];
			t=i;
		}
	}
	return t;
}


int main()
{
	int n,i,t;
	printf("enter the array size");
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
		printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	t=big(a,n);
	printf("big=%d\n position=%d\n",a[t],t);
}
