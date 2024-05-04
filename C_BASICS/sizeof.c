#include<stdio.h>
int main()
{
int a,c;
int *p,*p1;
p=&a;
p1=&a+1;
c=p1-p;
printf("%d",c);
}
