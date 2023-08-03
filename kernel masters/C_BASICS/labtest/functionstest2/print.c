#include "dates.h"

void printdateinformate(int d,int m,int y)
{
printf("%d",d);
subscript(d);
monthname(m);
printf("-%d",y);
}
void subscript(int d)
{
if(d%10==1)
printf("st");
else if(d%10==2)
printf("nd");
else if(d%10==3)
printf("rd");
else
printf("th");
}
void monthname(int m)
{
switch(m)
{
case 1:
printf("jan");
break;
case 2:
printf("feb");
break;
case 3:
printf("mar");
break;
case 4:
printf("april");
break;
case 5:
printf("may");
break;
case 6:
printf("june");
break;
case 7:
printf("july");
break;
case 8:
printf("aug");
break;
case 9:
printf("sep");
break;
case 10:
printf("oct");
break;
case 11:
printf("nov");
break;
case 12:
printf("dec");
break;
}
}

