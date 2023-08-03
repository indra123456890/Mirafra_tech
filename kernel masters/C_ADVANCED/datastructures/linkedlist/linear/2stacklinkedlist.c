#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
int id;
char name[50];
struct student *next;
}student;

student *create_node()
void printll(student *p);
student *push(student *top);
student *pop(student *top);


int main()
{
int *H=NULL,*N=NULL,*L=NULL;
int choice;
while(1)
{
printf("enter the choice\n");
printf("1.push\n2.pop\n3.quit\n");
printf("enter the option that u want\n");
scanf("%d",&choice);
printf("\n");
switch(choice)
{
case 1:h=push(h);
break;
case 2:h=pop(h);
break;
case 3:goto EXIT;
}
printll(h);
}
EXIT:printf("thankyou\n");
}



student *create_node()
{
student *new=(student *)malloc(sizeof(student));
printf("enter id\n");
scanf("%d",&new->id);
printf("enter the student name\n");
scanf("%s",new->name);
new->next=NULL;
return new;
}

void printll(student *p)
{
while(p)
{
printf("student id %d\n,student name :%d\n",p->id,p->name);
p=p->next;
}
}

void push(int x)
{

