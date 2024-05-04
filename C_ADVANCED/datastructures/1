/*#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	char name[10];
	struct student *next;
}student;
student *createnode()
{
	student *new=(student *)malloc(sizeof(student));
	scanf("%d",&new->id);
	new->next=NULL;
	return new;
}
void printll(student *p)
{
	while(p)
	{
		printf("%d\n",p->id);
		p=p->next;
	}
}
int main()
{
	student *H=NULL,*N=NULL,*L=NULL;
	char ch;
	while(1)
	{
		N=createnode();
		if(H==0)
		{
			H=L=N;
		}
		else
		{
			L->next=N;
			L=N;
		}	
		printf("want to create another node?\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n')
			break;
	}
	printll(H);
}*/



#include<stdio.h>
#include<stdlib.h>

struct node
{
	int id;
	struct node *next;
};
struct node *createnode()
{
struct node *new=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&new->id);
	new->next=NULL;
	return new;
}
void printll(struct node *p)
{
	while(p)
	{
		printf("%d\n",p->id);
			p=p->next;
	}
}
int main()
{
	struct node *head=NULL,*temp=NULL,*newnode=NULL;
	char ch;
	while(1)
	{
		newnode=createnode();
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("want to create another node\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n')
			break;
	}
	printll(head);
}

