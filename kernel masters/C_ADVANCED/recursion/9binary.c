#include<stdio.h>
int binary(int n)
{
	//static int a=0;
	int r;
	if(n==0)
	{
		return 1;
	}
	else
	{
		r=n%2;
		n=n/2;
		binary(n);
		printf("%d",r);
	}
}

int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
binary(n);
}
