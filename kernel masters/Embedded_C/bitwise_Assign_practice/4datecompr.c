#include<stdio.h>
int todate(int m,int d,int y);
int month(int date,int m);
int main()
{
int d,m,y,i;
short int date=0;
printf("enter the date");
scanf("%d%d%d",&m,&d,&y);
date=todate(d,m,y);
for(i=0;i<16;i++);
if(date&0x80000000)
{
printf("1");
}
else
{
printf("0");
}
date=date<<1;
}
m=month(date,m);
printf("%d",m);
}

int todate(int d,int m,int y)
{
short int date=0;
int i;
y=y%100;
date=(date|m)<<12|(date|d)<<7|date|y;
extractdate(date);
extractmonth(date);
ectractyear(date);
return date;
}
int month(int date,int m)
{
m=date>>12;
return m;
}

