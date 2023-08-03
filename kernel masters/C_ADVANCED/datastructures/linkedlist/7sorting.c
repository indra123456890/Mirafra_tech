#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int id;
	char ch[20];
	struct student *next;
}
student;

void printll(student *p);
student *sorting(student *t,student *n);
student *create_node();

int main()
{
	student *h = NULL,*n = NULL,*l =   NULL;
	while(1)
	{
		n = create_node();
		if(!n)
		{
			break;
		}
		else
		{
			if(!h)
				h = n;
			else
			{
				h = sorting(h,n);
			}
		}
		printf("\n");
		printll(h);
		printf("\n");
	}
}



student *create_node()
{
	student *new = (student *)malloc(sizeof(student));
	printf("Enter student ID and Name\n");
	scanf("%d",&new->id);
	if(new->id<0){
		return 0;}
	else{
		scanf(" %s",new->ch);
		new->next = NULL;}
	return new;
}


void printll(student *p)
{
	while(p)
	{
		printf("student ID : %d\tstudent:%s\n",p->id,p->ch);
		p=p->next;
	}
}



student *sorting(student *t,student *n)
{
	student *l = t;
	student *s = l->next;

	if(n->id<l->id&&n->id>0)
	{
		n->next=t;
		return n;
	}
	if(l->id >= n->id && n->id <= s->id)
	{
		n->next = s;
		t->next = n;
		return t;
	}
	while(s && s->id < n->id)
	{
		s = s->next;
		l = l->next;
	}
	n->next = l->next;
	l->next = n;
	return t;
}

