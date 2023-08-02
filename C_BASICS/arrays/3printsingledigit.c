#include<stdio.h>
int main()
{
	int n=789,r,s=0,c;
	while(c!=0)
	{
		while(n)
		{
			r=n%10;
			s=s+r;
			n=n/10;
		}
		n=r;
	}
	printf("%d",s);
}
