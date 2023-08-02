#include<stdio.h>

int main()
{
	int i,j,x,t,n;

	printf("enter arr size:");
	scanf("%d",&n);

	int a[n];
	printf("%d elemnts:",n);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		x=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				x=1;
			}
		}
		if(x==0)
		{
			break;
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

