#include<stdio.h>
int main()
{
	int n=10;
	int a[10]={1,2,2,3,4,5,6,7,8,9};
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				int k=j;
				for(;k<n;k++)
				{
					a[k]=a[k+1];
				}
				j--;
				n--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
