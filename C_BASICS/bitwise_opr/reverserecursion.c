#include<stdio.h>
int revrec(int n);
int main()
{
	int n=5;
	printf("%d",revrec(n));
}

int revrec(int n)
{
	static int i=0;
	static int j=3;
	if(i>=j)
		return n;
		if(!(n&(1<<i))!=(!(n&(1<<j))))
		{
			n=n^(0x1<<j);
			n=n^(0x1<<i);
			i++;
			j--;
		}
		return revrec(n);
}

