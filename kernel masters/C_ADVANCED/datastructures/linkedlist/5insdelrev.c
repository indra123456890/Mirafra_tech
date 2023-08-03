#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int ID;
	char name[50];
	struct student *next;
}student;
student * createnode(void)
{
	student *new=(student *)malloc(sizeof(student));
	scanf("%d %s",&new->ID,new->name);
	new->next=NULL;
	return new;

}
void printll(student *p)
{
	while(p)
	{
		printf("%d %s\n",p->ID,p->name);
		p=p->next;
	}
}
student * insertatposition(student *t,int p)
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
			printf("Linked list  have only %d nodes but you entered %d\n",i-1,p);
			return H;
		}
		N->next=t->next;
		t->next=N;
		return H;

	}
}
void  insertbefore(student **H,int p)
{
	student *N=NULL,*t=NULL;
	t=*H;
	N=createnode();
	if(t->ID==p)
	{
		N->next=t;
		*H=N;
	}
	else
	{
		while(p!=t->next->ID)
		{
			t=t->next;
			if((t->next)==NULL)
			{
				printf("key %d not in the list\n",p);
				goto one;
			}
		}
		N->next=t->next;
		t->next=N;
one: printf("\n");
	}

}
student *insertafter(student *t,int id)
{
	student *N=NULL,*H=NULL;
	H=t;
	N=createnode();
	while(id!=t->ID)
	{
		t=t->next;
		if(t==NULL)
		{
			printf("key %d is not in list\n",id);
			return H;
		}

	}
	N->next=t->next;
	t->next=N;
	return H;
}

student * deletenode(student *H,int p)
{
	int i=1;
	student *t=H,*N=NULL;
	if(p==1)
	{
		N=H;
		H=H->next;
		free(N);
		return H;
	}
	else
	{
		if(t->next==NULL)
		{
			printf("pls enter avaliable node\n");
			return H;
		}
		while(i<(p-1) && t)
		{
			t=t->next;
			i++;
			if(t->next==NULL)
			{
				printf("you entered wrong node\n");
				return H;
			}
		}
		N=t->next;
		t->next=N->next;
		free(N);
		return H;
	}
}
void deletekey(student **H,int p)
{
	student *N=NULL,*t=*H;
	if(p==t->ID)
	{
		N=t;
		t=t->next;
		*H=t;
		free(N);
	}
	else
	{
		while(p!=t->next->ID)
		{
			t=t->next;
			if(t->next==NULL)
			{
				printf("key is not in the list\n");
				goto one;
			}
		}
		N=t->next;
		t->next=N->next;
		free(N);
one: printf("\n");
	}
}

student * reverse(student *H)
{
	student *p=NULL,*q=NULL,*r=NULL;
	if(H->next==NULL)
	{
		return H;
	}
	else if(H->next->next==NULL)
	{
		p=H;
		H=H->next;
		H->next=p;
		p->next=NULL;
		return H;
	}
	else
	{
		p=H;
		q=p->next;
		r=q->next;
		while(q!=NULL)
		{
			q->next=p;
			p=q;
			q=r;
			if(r)
				r=r->next;
		}
		H->next=NULL;
		return p;
	}
}
void sort(student **H)
{
	int a;
	student *t1=NULL,*t2=NULL;
	t1=*H;
	while(t1!=NULL)
	{
		t2=t1->next;
		while(t2!=NULL)
		{
			if(t2->ID<t1->ID)
			{
				a=t1->ID;
				t1->ID=t2->ID;
				t2->ID=a;
			}
			t2=t2->next;
		}
		t1=t1->next;
	}
}
int main()
{
	char c;
	student *H=NULL,*N=NULL,*L=NULL;
	int n,p;
	printf("enter the nodes for the Linked LIst:\n");
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
		printf("Do you want to create a node y/n:\n");
		scanf(" %c",&c);
		if(c=='n')
			break;
	}
	while(1)
	{
		printf("Choose your option:\n");
		printf("1.Insert a position\n2.Insert before a key\n3.Insert after a key\n4.Deletion by Position\n5.Deletion by key\n6.Reversing LinkedList\n7.sorting\n8.exit");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("Enter the position :");
			       scanf("%d",&p);
			       H=insertatposition(H,p);
			       break;
			case 2:
			       printf("Enter before  key(id):");
			       scanf("%d",&p);
			       insertbefore(&H,p);
			       break;
			case 3:
			       printf("enter the after key(id):");
			       scanf("%d",&p);
			       H=insertafter(H,p);
			       break;
			case 4:
			       printf("enter the position to delete:");
			       scanf("%d",&p);
			       H=deletenode(H,p);
			       break;
			case 5:
			       printf("enter the key to delete:");
			       scanf("%d",&p);
			       deletekey(&H,p);
			       break;
			case 6:
			       H=reverse(H);
			       break;
			case 7:
			       sort(&H);
			       break;
			default:
			       printf("Enter the valid Option\n");
			       break;
		}
		if(n==8)
			break;
		printf("\n");
		printll(H);
	}
} 


