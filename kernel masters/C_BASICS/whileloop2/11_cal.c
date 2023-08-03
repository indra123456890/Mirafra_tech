#include<stdio.h>
int main()
{
	int a,b,y;
	char h,c,d,e;
	c='y';
	while(c=='y')
	{
		printf("enter a value\n");
		scanf("%d",&a);
		printf("enter b value\n");
		scanf("%d",&b);
		printf("enter operator\n");
		scanf(" %c",&h);
		if(h=='+')
		{
			printf("addition of two numbers:\n%d",a+b);
		}
		else
			if(h=='-')
			{
				printf("substraction of two numbers:\n%d",a-b);
			}
			else
				if(h=='/')
				{
					printf("division quetient:%d\n",a/b);
				}
				else
					if(h=='%')
					{
						printf("division remainder:\n%d",a%b);
					}
					else
					{
						printf("invalid operatoe:\n");


					}

		printf(" continue press y not press n\n");
		scanf(" %c",&c);


	}


	return 0;
}
