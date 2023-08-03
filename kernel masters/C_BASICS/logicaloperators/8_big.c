#include<stdio.h>
int main()
{
	int a,b,c,x;
	printf("enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	a>b&&a>c?printf("%d is greater\n",a)||b>c?:printf("%d is greater\n",b):printf("%d is greater\n",c);
	return 0;
}
