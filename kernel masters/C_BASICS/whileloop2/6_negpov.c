#include<stdio.h>
int main()
{
	int i=0,n,c=0,a,sum=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a);
		if(a>=0)
		{
			sum=sum+a;
			i++;
		}
	}
	printf("sum=%d\n",sum);
	return 0;
}

