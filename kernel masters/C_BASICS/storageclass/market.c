#include "my.h"

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
				printf("\n");
				i=0;
				break;
			default:
				printf("invalid choice\n\n");
		}
	}
}

