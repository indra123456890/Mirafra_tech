#include<stdio.h>
int main()
{
	int i=0,a;
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		i++;
	}
	printf("%d no of digits",i);
	return 0;
}
