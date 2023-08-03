#include<stdio.h>
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
	scanf("%s",new->name);
	new->next=NULL;
	return new;
}
/*void insertatpos(student *T)
  {
  int p,i=1;
  printf("enter position\n");
  scanf("%d\n",&p);
  while(i<p-1)
  {
//for(i=1;i<p-1;i++){
T=T->next;
i++;
}*/
/*student *createnode()
  {
  new->next=T->next;
  T->next=new;
  }*/
student *insertatpos(student *t,int p)
{
	int i=1;
	student *N=NULL,*H=NULL;
	H=t;

	N=createnode();
	if(p==1)
	{
		N->next=H;
		return N;
	}
	else
	{
		while(i<(p-1)&&t)
		{
			t=t->next;
			i++;
		}
		if(t==NULL)
		{
			printf("no nodes found");
			return H;
		}

		N->next=t->next;
		t->next=N;

		return H;
	}
}

void insertbeforepos(student **H,int p)
{
	student *N=NULL,*t=NULL;
	t=*H;
	N=createnode();
	if(t->id==p)
	{
		N->next=t;
		t=N;
		*H=t;
	}
	else
	{
		while(p!=t->next->id)
		{
			t=t->next;
			if((t->next)==NULL)
			{
				printf("key %d not in list\n",p);
				goto one;
			}
		}
		N->next=t->next;
		t->next=N;
one:printf("\n");
	}
}	

student *insertafterpos(student *t,int p)
{
	student *N=NULL,*H=NULL;
	H=t;
	N=createnode();
	while(p!=t->id)
	{
		t=t->next;
		if(t==NULL)
		{
			printf("key is not in the list");
			return H;
		}
		N->next=t->next;
		t->next=N;
		return H;
	}
}

void printll(student *p)
{
	while(p)
	{
		printf("%d%s\n",p->id,p->name);
		p=p->next;
	}
}
int main()
{
	student *H=NULL,*N=NULL,*L=NULL;
	int p,n;
	char ch;
	while(1)
	{
		N=createnode();
		if(!H)
		{
			H=N;
		}
		else
		{
			L->next=N;
		}
		L=N;
		printf("want to create another node?\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n')
			break;
	}

	while(1)
	{
		printf("choose your option");
		printf("1.Insert at pos\n2.insert at before\n3.insert at after\n4.printlldisplay\n5.exit");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter the position:");
				scanf("%d",&p);

				H=insertatpos(H,p);
				printll(H);
				break;
			case 2: printf("enter before key");
				scanf("%d",&p);
				insertbeforepos(&H,p);
				printll(H);
				break;
			case 3:printf("enter after key");
			       scanf("%d",&p);
			       H=insertafterpos(H,p);
			       printll(H);
			       break;
			case 4:printll(H);
			       break;
		}
		if(n==5)
			break;
	}
}
