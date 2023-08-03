#include "my.h"

int items;
extern int st;
void sales(void)
{
	printf("Sales\nEnter items:");
	scanf("%d",&items);
	if(items<=st)
	{
		ds();
		printf("Sales is success.\n");
		printf("Available stock:%d\n\n",st);
	}
	else
		if(items>st)
	{
		printf("sorry out of stock.\n\n");
}
}
		void ds(void)
		{
			st=st-items;
		}

