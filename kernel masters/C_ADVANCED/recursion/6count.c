#include<stdio.h>
int count(int n)
{
	static int c=0;
	if(n==0)
	{
		return c;
	}
	else
	{
		c++;
		return count(n/10);
	}
}
int main()
{
	int n,c;
	printf("enter a number");
	scanf("%d",&n);
	c=count(n);
	printf("%d",c);
}
