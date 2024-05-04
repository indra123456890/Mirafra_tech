#include<stdio.h>
int main()
{
	int a[4]={3,2,2,5};
	int i,j,c=0;
	for(i=0;i<4;i++)
	{
		c=0;
		for(j=0;j<4;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					c++;
				}
			}
		}
		if(c==0)
		{
			printf("%d",a[i]);
		}
	}
}
