#include<stdio.h>
int valid(int m,int y)
{
if(m>0&&y>0)
{
if(m<=12)
{
switch(m)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:if(m<=12)
{
return(4);
break;
}
else
{
return(0);
break;
}
case 4:
case 6:
case 9:
case 11:if(m<=12)
{
return(1);
break;
}
else
{
return (0);
break;
}
case 2:if(y%100!=0&&y%4==0||y%400==0)
      {
      if(m==2)
      {
      return (2);
      break;
      }
      else
      {
      return (0);
      break;
      }

      }
      else if(m==2)
      {
      if(m==2)
      {
      return(3);
      break;
      }
      else
      {
      return(0);
      break;
      }
      }
      else
      return(0);

}

}
else
return(0);
}
else
return (0);
}


int leap(int y)
{
if((y%4==0&&y%100!=0)||y%400==0)
return(1);
else
return(0);
}
int main ()
{
int y,m,c,f,e;
char ch;
printf("enter date(mm-yyyy)\n");
scanf("%d%c%d",&m,&ch,&y);
c=valid(m,y);
e=leap(y);
if(e==1)
{
if(c!=0)
{
if(c==4)
printf("%d-month has 31 days and year has 366 days\n",m);
if(c==3)
printf("%d-month has 28 days and year has 366 days\n",m);
if(c==2)
printf("%d-month has 29 days and year has 366 days\n",m);
if(c==1)
printf("%d-month has 30 days and year has 366 days\n",m);
}
}
else if(e==0)
{
if(c==4)
printf("%d-month has 31 days and year has 365 days\n",m);
if(c==3)
printf("%d-month has 28 days and year has 365 days\n",m);
if(c==1)
printf("%d-month has 30 days and year has 365 days\n",m);
}
else if(c==0)
printf("invalid date\n");

return (0);
}
