#include<stdio.h>
int countbits(int n);
int main()
{
	int n,b;
	printf("Enter Count Bits\n");
	scanf("%d",&n);
	b=countbits(n);	
	printf("count bits:%d\n",b);
}
int countbits(int n)
{
	int c=0;	
	while(n>0)
	{
		n=n&n-1;
		c++;
	}
	return c;
}


