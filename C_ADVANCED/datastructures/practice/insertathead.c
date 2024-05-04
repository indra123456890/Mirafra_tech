#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *createnode()
{
struct node *new=(struct node*)malloc(sizeof(struct node));
scanf("%d",&new->data);
new->next=NULL;
return new;
}
void printll(struct node *p)
{
while(p)
{
printf("%d",p->data);
p=p->next;
}
}
struct node* insert(struct node *p)
{
while(p!=NULL)
{
struct node *new=createnode();
{
new->next=p;
p=new;
}
return p;
}
}
struct node* insertat(struct node *p)
{
struct node *temp=NULL;
temp=p;
int i=1,pos=2;
while(i<pos)
{
temp=temp->next;
i++;
}
struct node *new=createnode();
new->next=temp->next;
temp->next=new;
return p;
}
struct node* deletebeg(struct node *p)
{
struct node *temp=NULL;
temp=p;
while(p!=NULL)
{
p=p->next;
free(temp);
return p;
}
}
int main()
{
int i=0;
struct node *head=NULL,*temp=NULL,*newnode=NULL;
while(i<5)
{
newnode=createnode();
if(head==NULL)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
i++;
}
printll(head);
head=insert(head);
printll(head);
//head=insertat(head);
//printll(head);
head=deletebeg(head);
printll(head);
}

