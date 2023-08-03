/*3) write a function that takes an array and its size as input and returns biggest number index as output. And print the biggest number based on the function call*/


#include<stdio.h>
int big(int a[],int n)
{
	int t,i,big;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			big=a[0];
			t=0;
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
	int a[n];
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	t=big(a,n);
	printf("big=%d\n position=%d\n",a[t],t);
}

