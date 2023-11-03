/*#include<stdio.h>
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
}*/





#include<stdio.h>
int a[5];
int r=-1,f=-1;
int isempty(void)
{
if(r==-1&&f==-1)
return 1;
else
return 0;
}
int isfull(void)
{
if(r==4)
return 1;
else 
return 0;
}
void insert(int n)
{
if(isfull()==1)
{
printf("queue is full\n");
return;
}
a[++r]=n;
}
int delete(void)
{
if(isempty()==1)
{
printf("Queue is empty\n");
return -1;
}
return a[++f];
}
int main()
{
int c,n,i;
while(1)
{
printf("enter the ur choice 1.insert 2.Delete 3.Display 4.exit\n");
scanf("%d",&c);
switch(c)
{
case 1:
printf("enter the element to insert\n");
scanf("%d",&n);
insert(n);
break;
case 2:
printf("Deleted element:%d\n",delete());
break;
case 3:
for(i=f+1;i<=r;i++)
{
printf("%d ",a[i]);
}
break;
defualt:
break;
}
if(c==4)
break;
}
}




