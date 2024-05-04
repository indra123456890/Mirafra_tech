//check if given num is prime or not
//mistake trying to divide number with 0 so got floating point exception op later changed i=1
#include<stdio.h>
int prime(int n)
{
	static int i=1;
	static int c;
	if(i==100)
		return c;
	//if(c==2)
	//return 1;
	//else
	//return 0;
	while(i<100)
	{
		if(n%i==0)
		{
			c++;
		}
		i++;
	}
	return prime(n);
}
int main()
{
	int n,r;
	scanf("%d",&n);
	r=prime(n);
	if(r==2)
	{
		printf("is prime");
	}
	else
	{
		printf("not prime");
	}
}
