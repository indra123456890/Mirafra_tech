#include<stdio.h>
int main()
{
	int i=0,a,b,c=0;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	while(i<b)
	{

		c=c+a;
		i++;
	}
	printf("%d",c);
	return 0;
}
