#include<stdio.h>
int main()
{
	int i=0,a,n=1;
	printf("enter the number");
	scanf("%d",&a);
	while(i<n)
	{
		if(a==2||a==3||a==5)
		{
			printf("prime number");
		}
		else if(a%2==0||a%3==0||a%5==0)
		{
			printf("not prime number");
		}
		else 
		{
			printf("it is prime number");
		}
		i++;
	}
	return 0;
}
