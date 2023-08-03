#include<stdio.h>
int main()
{
int a,b;
int *p1,*p2;
{
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
p1=&a;
p2=&b;
printf("%d",*p1+*p2);
}
}
