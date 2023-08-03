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
void insertatpos(student *T)
{
int p=4,i=1;
while(i<p-1)
{
//for(i=1;i<p;i++)
//{
T=T->next;
i++;
}
student *new=createnode();
{
new->next=T->next;
T->next=new;
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
insertatpos(H);
	printll(H);
}

