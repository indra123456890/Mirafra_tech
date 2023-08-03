#include<stdio.h>
int main()
{
	int i=0,c=0,a,sum=0,average;
	while(c==0)
	{
		scanf("%d",&a);
		if(a>=0)
		{
			sum=sum+a;
			i++;
		}
		else 
		{
			c=20;
		}
	}
	average=sum/i;
	printf("sum=%d\n",sum);
	printf("average=%d\n",average);
	return 0;
}
