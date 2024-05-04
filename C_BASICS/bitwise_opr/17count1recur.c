#include<stdio.h>
int fun(int n)
{
	static int c=0;
	if(n==0)
		return c;
	if((n&1)!=0)
		c++;
	
	n=n>>1;
	return fun(n);
}
int main()
{
	int n=5;
	printf("%d",fun(n));
}
