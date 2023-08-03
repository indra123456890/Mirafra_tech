#include"dates.h"
void printdateinformat(int d2,int m2,int y2)
{
printsubscript(d2);
printmonthname(m2,y2);
}
void printsubscript(int d2)
{
int c;
if(d2==11)
printf("%dth",d2);
else

c=d2%10;
if(c==1)
printf("%dst",d2);
else if(c==2)
printf("%dnd",d2);
else if(c==3)
printf("%drd",d2);
else
printf("%dth",d2);
}
void printmonthname(int m2,int y2)
{
switch(m2)
{
case 1:printf("January-%d\n",y2);
      break;
case 2:printf("February-%d\n",y2);
      break;
case 3:printf("March-%d\n",y2);
      break;
case 4:printf("April-%d\n",y2);
      break;
case 5:printf("May-%d\n",y2);
      break;
case 6:printf("June-%d\n",y2);
      break;
case 7:printf("July-%d\n",y2);
      break;
case 8:printf("August-%d\n",y2);
      break;
case 9:printf("September-%d\n",y2);
      break;
case 10:printf("October-%d\n",y2);
break;
case 11:printf("November-%d\n",y2);
break;
case 12:printf("December-%d\n",y2);
break;

}
}

