#include<stdio.h>
int main()
{
	int n=789,r,s,c;
	while(n>9)
	{
s=0;
		while(n)
		{
			r=n%10;
			n=n/10;
		s=s+r;
		}
		n=s;
	}
	printf("%d",s);
}
