#include"dates.h"
int main()
{
int n,d1,d2,m1,m2,y1,y2,c,v,i=1;
printf("enter the number to read the dates of birth of candidates\n");
scanf("%d",&n);
while(i<=n)
{
printf("enter the date of birth(date,month&year)of the candidate%d\n",i);
scanf("%d %d %d",&d1,&m1,&y1);
v=isvaliddate(d1,m1,y1);
if(v==0)
{
printf("entered date is invalid,please enter valid date\n");
}
if(v==1 && i==1)
{
i++;
d2=d1;
m2=m1;
y2=y1;
}
else if(v==1&&i>=2)
{
i++;
c=datecompare(d1,m1,y1,d2,m2,y2);
if(c==1)
{
d2=d1;
m2=m1;
y2=y1;
}
}
}
printdateinformat(d2,m2,y2);
return 0;
}



