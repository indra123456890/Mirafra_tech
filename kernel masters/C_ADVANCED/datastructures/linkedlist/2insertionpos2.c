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
printf("enter position");
scanf("%d",&p);
H=insertatpos(H,p);
printll(H);
}
/*while(1)
{
printf("choose your option");
printf("1.Insert at pos\n2.insert at after\n3.insert at before\n4.printlldisplay\n5.exit");
scanf("%d",&n);
switch(n)
{
case 1:
printf("enter the position:");
scanf("%d",&p);

	insertatpos(H,p);
	printll(H);
}*/
