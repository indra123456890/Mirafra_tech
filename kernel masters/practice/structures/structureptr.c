#include<stdio.h>
int main()
{
struct student
{
int id;
char name[10];
float marks;
}s;

struct student *p=&s;
scanf("%d %s %f",&p->id,p->name,&p->marks);
printf("%d %s %f",p->id,p->name,p->marks);
}
