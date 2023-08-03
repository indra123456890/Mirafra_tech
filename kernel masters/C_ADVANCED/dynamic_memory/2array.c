#include<stdio.h>
int main()
{
	int a[10],i,big,small,x,y;
	printf("enter 10 elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i==0)
		{
			big=a[i];
			x=i;
			small=a[i];
			y=i;
		}
		if(big<a[i])
		{
			big=a[i];
			x=i;
		}
		if(small>a[i])
		{
			small=a[i];
			y=i;
		}
	}
	printf("big=%d p=%d\nsmall=%d p=%d\n",big,x,small,y);
}

