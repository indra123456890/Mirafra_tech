#include<stdio.h>
int main()
{
	int m,p,c,x;
	printf("enter the marks:");
	scanf("%d%d%d",&m,&p,&c);
	x=m+p+c;
	if(m>=60&&p>=50&&c>=40&&x>=200)
	{
		printf("eligible");
	}
	else
	{
		printf("not eligible");
	}
	return 0;
}
