#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *createnode(void)
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&new->data);
	new->next=NULL;
	return new;
}

void display(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

void reverse(struct node *p)
{
	struct node *current=NULL,*nextnode=NULL,*prev=NULL;
	current=nextnode=p;
	while(nextnode!=NULL)
	{
		nextnode=nextnode->next;
		current->next=prev;
		prev=current;
		current=nextnode;
	}
	p=prev;
	display(p);
}


int main()
{
	struct node *head=NULL,*current=NULL,*temp=NULL;
	int i=0;
	while(i<5)
	{
		current=createnode();
		if(head==NULL)
		{
			head=current;
		}
		else{
			temp->next=current;
		}
		temp=current;i++;
	}
	display(head);
printf("\n");
	reverse(head);
}
