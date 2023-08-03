#include<stdio.h>
int main()
{
	int a,b,c=0,i,j,n;
	printf("enter a b values");
	scanf("%d%d",&a,&b);
	for(n=a;n<=b;n++)
	{
		i=a;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			break;
		}
	
		if(i==n/2+1)
			printf("%d\n",n);
	}
}
