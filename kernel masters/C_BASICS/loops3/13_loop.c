#include<stdio.h>
int main()
{
	int i=0,a;
	printf("enter a nnumber\n");
	scanf("%d",&a);
	do
	{
		a=a/10;
		i++;
	}
	while(a!=0);
	printf("digits:%d\n",i);
}
