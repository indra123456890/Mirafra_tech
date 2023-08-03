#include<stdio.h>
int main()
{
	int i=1,n,sum=0,a;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&a);
		sum=sum+a;
		i++;
	}
	printf("\b=%d\n",sum);
	return 0;
}
