#include<stdio.h>
void extdate(short int date)
{
	int d=0;
	d=(date>>7&0x001f);
	printf("%d ",d);
}
void extmonth(short int date)
{
	int m=0;
	m=(date>>12&0x000f);
	printf("%d ",m);
}
void extyear(short int date)
{
	int y=0;
	y=(date&0x007f);
	printf("%d \n",y);
}
int fun(int d,int m,int y)
{	
	short int date=0;
	y=y%100;
	date=m<<12|d<<7|y;
	printf("Date Compress:%hd\n",date);
	printf("Date Extract\n");

	extdate(date);
	extmonth(date);
	extyear(date);
	return date;
}
int main()
{
	short int dt;
	int d,m,y;
	printf("Enter Date Month Year\n");
	scanf("%d%d%d",&d,&m,&y);
	dt=fun(d,m,y);
}

