#include<stdio.h>
#include"my.h"

int main()
{
	int totalsalary, lop, m, y, netsal;
	printf("total salary");
	scanf("%d",&totalsalary);
/*	if(total salary)
	{
		printf("is valid");
	}
	else
	{
		printf("is not valid");
	}
	scanf("%d",&totalmonthlysalary);
*/	
	printf("total number of lop\n");
	scanf("%d",&lop);
	printf("enter the month and year\n");
	scanf("%d%d",&m,&y);
/*	if(m<13)&&(y>=0)
	{
		printf("validate month and year");
	}
*/	
	netsal = calculatenetsalary(totalsalary, lop, m, y);
	printf("The net salary = Rs %d\n",netsal);
/*	
		int total salary,s;
		net salary=total salary-lop*totalsalary/m:
			s= calculate netsalary(m,y);
		return netsalary;
*/
	}

