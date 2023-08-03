#include<stdio.h>
int main()
{
	int i=1,n,a,sum1=0,sum2=0;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&a);
		if(a>0)
		{
			sum1=sum1+a;

		}
		else if(a<0)
		{
			sum2=sum2+a;

		}
		i++;
	}
	printf("sum of positive=%d\n",sum1);
	printf("sum of negative=%d\n",sum2);
	return 0;
}
