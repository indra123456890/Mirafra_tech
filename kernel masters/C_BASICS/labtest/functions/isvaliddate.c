int isvaliddate(int d1,int m1,int y1)
{
if(d1>0&&m1>0&&y1>0){
switch(m1)
{
case 1:case 3:case 5:case 7:case 8:case 10:case 12:if(d1>=1 && d1<=31)return 1;
  else
  return 0;
case 4:case 6:case 9:case 11:if(d1>=1 && d1<=30)return 1;
    else
    return 0;
   
case 2:if(isleapyear(y1,d1))

      return 1;
      else
      return 0;

}}
else
return 0;
}
int isleapyear(int y1,int d1)
{
if(y1%4==0&&y1%100!=0||y1%400==0)
{
if(d1>=1&&d1<=29)

return 1;
}
else if(d1<=28)
return 1;
else
return 0;
}
