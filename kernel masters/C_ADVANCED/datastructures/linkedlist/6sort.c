#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
int id;
struct student *next;

}student;

student *createnode(void)
{
student *new;
new=(struct student *)malloc(sizeof(struct student *));
printf("enter id\n");
scanf("%d",&new->id);
new->next=NULL;
return new;
}

void traveler(student *t)
{
while(t!=NULL)
{
printf("\n%d\n",t->id);
t=t->next;
}
}

student *sorting(student *head)
{
student *p=head,*q;
int t;
while(p->next!=0)
{
q=p->next;
while(q!=0)
{
if(p->id > q->id)
{
t=p->id;
p->id=q->id;
q->id=t;
}
q=q->next ;
}
p=p->next;
}
return p,q;
}

student *reverse(student *head)
{
student *p,*q,*r;
p=q=r=NULL;
p=head;
q=p->next;
r=q->next;
while(q)
{
q->next=p;
p=q;
q=r;
if(r)
r=r->next;
}
head->next=NULL;
return p;
}

student * delete_position(student * head)
{
int i=1,n;
student *t=head;
student *d=NULL;
printf("enter position to delete\n");
scanf("%d",&n);

if(n==1)
{
d=head;
head=d->next;
free(d);
d=NULL;
}
else
{
while((t->next)&&(i<n-1))
{
t=t->next;
i++;
}
if(!(t->next))
{
printf("position not  found in list\n");
}
else
{
d=t->next;
t->next=d->next;
free(d);
d=NULL;
}
}
return head;
}

void delete_beforenode(student **head)
{
int key;
student *t=*head;
student *d=NULL;
printf("enter to delete before node\n");
scanf("%d",&key);

if((*head)->id==key)
{
d=*head;
*head=d->next;
free(d);
d=NULL;
}
else
{
while((t->next)&&(t->next->id!=key) )
{
t=t->next;
}
if(!(t->next))
{
printf("no data found in list\n");
}
else
{
d=t->next;
t->next=d->next;
free(d);
d=NULL;
}
}
}

void delete_afternode(student *t)
{
int key;
student *d=NULL;
printf("enter to delete after node\n");
scanf("%d",&key);

while((t->id!=key))
{
t=t->next;
if(!(t->next))
break;
}
if(!(t->next)&&(t->id==key))
{
printf("no node delete in list\n");

}
else if(!(t->next)&&(t->id!=key))
{
printf("no data found in list\n");
}

else
{
d=t->next;
t->next=d->next;
free(d);
d=NULL;
}
}

student insert_position(student **head)
{
int pos,i=1;
student *t=*head;
printf("enter position\n");
scanf("%d",&pos);
student *new=createnode();
if(pos==1)
{
new->next=*head;
*head=new;
}
else
{
while(i<pos-1)
{
t=t->next;
i++;
}
new->next=t->next;
t->next=new;
}
}

void insert_beginnode(student **head)
{
int key;
student *t=*head;
printf("enter begin node value\n");
scanf("%d",&key);
student *new=createnode();
if(t->id==key)
{
new->next=*head;
*head=new;
}
else
{
while((t->next)&&(t->next->id!=key))
{
t=t->next;
}
if(!(t->next))
{
printf("not found in list\n");
}
else
{
new->next=t->next;
t->next=new;
}
}
}

void insert_endnode(student *t)
{
int value;
printf("enter end node value\n");
scanf("%d",&value);
student *new=createnode();
while(t->id!=value)
{
t=t->next;
}
new->next=t->next;
t->next=new;
}



int main()
{
student *head=NULL,*new=NULL,*last=NULL;
char ch='y';
int option;
while(ch=='y')
{
new=createnode();
if(head==NULL)
{
head=new;
last=new;
}
else
{
last->next=new;
last=new;
}
printf("enter continue or exit y/n\n");
scanf("\n%c",&ch);
}

ch='s';
while(ch=='s')
{
printf("\n1)insert a new node at a given position\n2)insert new node before a given key\n3)insert after a given key\n4)delete new node at a given position\n5)insert a new node before key\n6)delete after a given key\n7)sorting\n8)reverse\n\n");
printf("enter your option\n");
scanf("%d",&option);
switch(option)
{
case 1:insert_position(&head);break;
case 2:insert_beginnode(&head);break;
case 3:insert_endnode(head);break;
case 4:delete_position(head);break;
case 5:delete_beforenode(&head);break;
case 6:delete_afternode(head);break;
case 7:sorting(head);break;
case 8:head=reverse(head);break;
}
printf("enter contine or exit y/n\n");
scanf("\n%c",&ch);
}
traveler(head);
}




