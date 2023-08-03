#include "../inc/my.h"
extern int st;
int limits=1000;
void purchase(void)
{
	if(st<=limits)
	{
		addstock();
	}      
	else if(st>limits)
	{
		printf("No space to add stock\n\n");
	}       
}
void addstock(void)
{
	int x,y;
	printf("Enter items to purchase:");
	scanf("%d",&x);
	y=limits-st;
	if(x<=y)
	{
                st=st+x;
		printf("stock is added.\nAvailable stock:%d\n\n",st);
	}
	else
	{
		printf("No space out of stock\n\n");
	}
}


