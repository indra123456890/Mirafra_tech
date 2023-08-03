#include<stdio.h>
int revint(int n)
{
	static int a=0;
	int r;
	if(n==0)
	{
		return a;
	}
	else
	{
		r=n%10;
		n=n/10;
		a=(a*10)+r;
		return revint(n);
	}
}

int main()
{
	int n;
	printf("enter  number");
	scanf("%d",&n);
	printf("%d",revint(n));
}
