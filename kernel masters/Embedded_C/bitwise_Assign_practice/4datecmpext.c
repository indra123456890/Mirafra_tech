#include<stdio.h>
short int compress(short int d,short int m,short int y);
short int extract_m(short int x);
short int  extract_d(short int x);
short int extract_y(short int x);
int main()
{
short int d,m,y,x;

scanf("%hd-%hd-%hd",&d,&m,&y);
y=y%100;
x=compress(d,m,y);
printf("%hx\n",x);
m=extract_m(x);
printf("%d\n",m);
y=extract_y(x);
printf("%d\n",y);
d=extract_d(x);
printf("%d\n",d);
}
short int compress(short int d,short int m,short int y)
{
short int x;
x=m<<12|d<<7|y;
return x;
}

short int extract_m(short int x)
{
short int m;
m=x>>12&(0x0f);
return m;
}
short int extract_y(short int x)
{
short int y;
y=x&(0x07f);
return y;
}
short int extract_d(short int x)
{
short int d;
d=x>>7&(0x1f);
return d;
}

