#include<stdio.h>
int main()
{
	int i=1,a,p,c=1;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter power:");
	scanf("%d",&p);
	while(i<=p)
	{
		c=c*a;
		i++;
	}
	printf("%d\n",c);
}
