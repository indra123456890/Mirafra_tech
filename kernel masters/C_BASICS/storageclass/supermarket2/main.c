#include "my.h"

int st,sa,it=0,pu=0,p,cu;
int main()
{
	int i=1,n;
	while(i)
	{
		printf("Choose Below  Option\n");
		printf("1.stock\n2.sales\n3.purchase\n4.quit\n");
		scanf("%d",&n);

		switch(n)
		{
			case 1:
				stock();
				break;
			case 2:
				sales();
				break;
			case 3:
				purchase();
				break;
			case 4:
				printf("1)closing stock:%d\n",st);
				printf("2)No of sales:%d\n",sa);
				printf("3)No of items sold:%d\n",it);
				printf("4)No of purchases:%d\n",p);
				printf("5)No of items purchased:%d\n",pu);
				printf("6)No of customers visited:%d\n\n",cu);
				i=0;
				break;
			default:
				printf("invalid choice\n\n");
		}
	}
}

