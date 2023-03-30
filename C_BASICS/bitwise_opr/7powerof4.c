#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter the number");
	scanf("%d",&n);
	if((n&(n-1)==0))
	{
		while((n&1)==1)
		{
			c++;
			n>>=1;
		}
	}
	if((c%2)==0)
	{
		printf("is power of 4");
	}
	else
	{
		printf("not power of 4");
	}
}

