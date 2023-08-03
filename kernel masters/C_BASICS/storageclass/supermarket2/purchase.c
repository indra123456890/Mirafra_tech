#include "my.h"

extern int st,p,pu;
int limits=1000;
void purchase(void)
{
	int n,m=0;
	if(st<limits)
	{
		addstock();
	}       
	else
		if(st>limits)
		{
			printf("space insufficient.\n1.add available stock\n2.cancel purchase.\n");
			scanf("%d",&n);
			if(n==1)
			{
				m=limits-st;
				st=st+m;
				printf("available stock:%d\n\n",st);
				p++;
				pu=pu+m;
			}
			else 
				if(n==2)
				{	
					printf("canceled purchases\n\n");
				}
		}
		else if(st==1000)
		{
			printf("No space to add stock\n\n");
		}      
}
void addstock(void)
{
	int x,y,k,m1;
	printf("Enter items to purchase:");
	scanf("%d",&x);
	y=limits-st;
	if(x>y)
	{
		printf("insufficient space.\n1.add available stock.\n2.cancel purchases.\n");
		scanf("%d",&k);
		if(k==1)
		{
			m1=limits-st;
			st=st+m1;
			printf("available stock:%d\n\n",st);
			p++;
			pu=pu+m1;
		}
		else
			if(x<=y)
			{
				st=st+x;	
				pu=pu+x;
				printf("stock is added success.\nAvailable stock:%d\n\n",st);
				p++;
			}
	}
	else if(st==1000)
	{
		printf("No space to add stock\n\n");
	}
}

