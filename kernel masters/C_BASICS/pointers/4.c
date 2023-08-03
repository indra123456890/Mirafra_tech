#include<stdio.h>
int main()
{
int x=10;
int y=20;
int z=30;
int *p1;
p1=&x;
printf("%d\n",*p1);
p1=&y;
printf("%d\n",*p1);
p1=&z;
printf("%d\n",*p1);
}

