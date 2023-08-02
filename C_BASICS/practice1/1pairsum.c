#include<stdio.h>
void findpair(int a[],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]+a[j]==n)
			{
				printf("the pair is %d %d",a[i],a[j]);
			}

		}
	}
}
int main()
{
	int i,m, n=10;
	printf("enter size of array");
	scanf("%d",&m);
	int a[m];
	printf("enter the array elements");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	findpair(a,n,m);
}
