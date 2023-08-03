#include<cal.h>
int main()
{
	int a,b,x,y;
	char ch;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
#ifdef ADD
	{
		x=addfunction(a,b);
		printf("%d\n",x);
	}
#endif
#ifdef SUB
		{
			y=subfunction(a,b);
			printf("%d\n",y);
		}
#endif
}
