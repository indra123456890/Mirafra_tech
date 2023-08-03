#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		printf("%d*",i);
		i++;
	}	
		printf("\b=%d\n",fact);
	return 0;
}

