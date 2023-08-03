#include<stdio.h>
int main()
{
	int n,r,m;
	scanf("%d",&n);
	while(n>9)
	{
		m=1;
		while(n!=0)
		{
			r=n%10;
			m=m*r;
			n=n/10;
		}
		n=m;
	}
	printf("%d\n",n);
}

