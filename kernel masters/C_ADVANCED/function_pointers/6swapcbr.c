#include<stdio.h>
int main()
{
int x=4,y=5;
int *p1,*p2,t;
p1=&x;
p2=&y;
t=*p1;
*p1=*p2;
*p2=t;
printf("%d %d",x,y);
}

