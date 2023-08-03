/*1."Write down a macro to find out the biggest of two numbers.
MAX(x,y) should define code to find biggest of x and y."*/

#include<stdio.h>
#define MAX(x,y) x>y
int main()
{
	int x,y;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	if(MAX(x,y))

	{
		printf("%d is biggest",x);
	}
	else 
	{
		printf("%d is biggest",y);
	}
}
