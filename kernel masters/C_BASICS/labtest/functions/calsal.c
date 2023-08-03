#include"my.h"

int calculatenetsalary(int total,int lop,int m,int y)
{
	int nod, calsal;
	nod = numberofdaysinmonth(m,y);
	calsal = total - lop * (float)total / nod;
	return calsal;
}


