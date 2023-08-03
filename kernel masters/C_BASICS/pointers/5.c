#include<stdio.h>
int main()
{
int *p1,*p2,*p3;
int x=10;
p1=&x;
p2=&x;
p3=&x;
printf("%d\n",*p1);
printf("%d\n",*p2);
printf("%d\n",*p2);
x=20;
printf("%d\n",*p1);
printf("%d\n",*p2);
printf("%d\n",*p3);
}
