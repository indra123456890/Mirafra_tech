#include<stdio.h>
int validate(int f,int g,int h)
{
int k;

switch(g)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
if(f<=31)
{

return 1;
}
else

                            return 0;

case 2:
if(h%4==0&&h%100!=0||h%400==0)
{
if(f<=29)
{
return 1;

 
}
else
{
return 0;

}
}
else if(f<=28)
if(f<=28)
{
return 1;


}
else
{
return 0;


}
else
{
return 0;


}
                           

case 4:
case 6:
case 9:
case 11:
if(f<=30)
{
return 1;
}
else
{
return 0;

}
default: return 0;
}
}
int older( int d1,int m1,int y1,int d2,int m2,int y2)
{

if(y1<=y2)
{
if(y1<y2)
return 1;
else if(y1==y2)
{
if(m1<m2)
return 1;
else if(m1>m2)
return 0;
else if(m1==m2)
if(d1<d2)
return 1;
else if(d1>d2)
return 0;
else if(d1==d2)
return 2;
}

}

else
return 0;

}
int main()
{
int d1,m1,y1,d2,m2,y2,n,k,m,f,g,h;
printf("enter 1st person D0B:\n");
scanf("%d-%d-%d",&d1,&m1,&y1);
printf("enter 2nd person DOB:\n");
scanf("%d-%d-%d",&d2,&m2,&y2);
f=d1;
g=m1;
h=y1;
k=validate(f,g,h);
f=d2;
g=m2;
h=y2;
m=validate(f,g,h);
n=older(d1,m1,y1,d2,m2,y2);
if(k&&m)

{
if(n==1)
printf("1st person born on %d-%d-%d is older\n",d1,m1,y1);
else if(n==0)
printf("2nd person born on %d-%d-%d is older\n",d2,m2,y2);
else if(n==2)
printf("Both are same age\n");
}
else
printf("please enter a valid date\n");
}


