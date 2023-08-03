
#include<stdio.h>
int main()
{
	int n,i,r;
	printf("Enter a value:\n");
	scanf("%d",&n);

	for(i=1;n!=0;i++)
	{

		r=n%10;
		n=n/10;
		printf("%d",r);
	}

	printf("\n");
}
