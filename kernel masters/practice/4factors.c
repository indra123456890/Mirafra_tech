#include<stdio.h>
int main()
{
	int i,j,a=1,b=10;
	for(i=a;i<=10;i++)
	{
		int c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==4)
		{
			printf("%d",i);
		}
	}
}


