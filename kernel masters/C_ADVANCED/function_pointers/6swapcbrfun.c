#include<stdio.h>
void swap(int **p1,int **p2)
{
int *t;
t=*p1;
*p1=*p2;
*p2=t;
}
int main()
{
int x=4,y=5;
int *p1,*p2;
p1=&x;
p2=&y;
printf("before swap:%p %d %p %d",p1,*p1,p2,*p2);
swap(&p1,&p2);
printf("after swap:%p %d %p %d",p1,*p1,p2,*p2);
}
