#include<stdio.h>
struct student
{
int id;
float per;
char c;
}s;

int main()
{
struct student *p=&s;
scanf("%d%f %c",&p->id,&p->per,&p->c);
printf("%d%.2f%c",p->id,p->per,p->c);
}
