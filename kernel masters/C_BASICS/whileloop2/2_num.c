/*2) Write a program to find the sum of first n serial numbers.
eg., input : 5
output: 1+2+3+4+5 = 15*/


#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		printf("%d+",i);
		i++;
	}
	printf("\b=%d\n",sum);
	return 0;
}
