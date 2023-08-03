#include<stdio.h>
#define size 5
int isempty(void)
int isfull(void)
void insert(int queue[],int t)
{
if(rear=size-1)
{
printf("queue is full\n");
}
else
{
int a;
scanf("%d",&a);
t++;
queue[++rear]=a;
}
}
void delete(int queue[],int t,int r)
{
if(front==rear)
{
printf("queue is empty\n");
}
else
{
queue[rear];
rear--;
}
}


int delete(int n)
int main()
{
int queue[size];
int front=-1;
int rear=-1;
int n;
scanf("%d",&n);
switch(n)
{
case 1:insert(queue,rear);
break;
case 2:isfull(queue,front,rear);
break;
}
