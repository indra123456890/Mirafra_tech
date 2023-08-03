#include<stdio.h>
int main()
{
int x;
int y;
int z;
int c;
int *p1,*p2,*p3;
printf("enter the values");
scanf("%d %d %d",&x,&y,&z);
p1=&x;
p2=&y;
p3=&z;
c=x;
*p1=y;
*p2=z;
*p3=c;


printf("%d\n",*p1);
printf("%d\n",*p2);
printf("%d\n",*p3);
}
