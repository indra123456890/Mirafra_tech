#include "my.h"

int st=1000;
int items;
extern int cu,sa,it;
void sales(void)
{
	int a,c;
	printf("Sales\nEnter items:");
	scanf("%d",&items);
	if(items<=st)
	{
		ds();
		sa++;
		printf("Sucess.\nAvailable stock:%d\n\n",st);
		cu++;
	}
	else
		if(st<items)
		{
			printf("1.sell available stock:%d\n2.cancel the sales\n",st);
			scanf("%d",&c);
		}
	if(c==1)
	{
		/*printf("enter items to sell:");
		  scanf("%d",&a);*/
		it=it+st;
		st=st-st;
		sa++;
		printf("Sucess\nAvailable stock:%d\n\n",st);
		cu++;
	}
	else
		if(c==2)
		{
			printf("Cancel the sales\n\n");		
			cu++;
		}
}
void ds(void)
{
	it=it+items;
	st=st-items;

}


