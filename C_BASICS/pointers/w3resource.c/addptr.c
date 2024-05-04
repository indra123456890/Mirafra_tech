#include<stdio.h>
int main()
{
int a=10,b=20;
int *p=&a;
int *p1=&b;
int c;
c=(*p)+(*p1);
printf("%d",c);
}
