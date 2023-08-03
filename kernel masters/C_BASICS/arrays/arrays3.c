#include<stdio.h>
int main()
{
	int m[10];
	int i,biggest,smallest,x,y;
	printf("enter numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",m[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i==0)
		{
			biggest=m[i];
			x=0;
			smallest=m[i];
			y=0;
		}
		else 
			if(biggest<=m[i])
			{
				biggest=m[i];
				x=i;
			}
		if(smallest>=m[i])
		{
			smallest=m[i];
			y=i;
		}
	}
	printf("biggest=%d\nsmallest=%d\nbiggestposition=%d\nsmallestposition=%d\n",biggest,smallest,x,y);
}
