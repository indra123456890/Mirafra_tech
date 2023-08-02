#include<stdio.h>

struct student
{
int id;
float per;
char name;
}s;
int main()
{
printf("enter elements");
scanf("%d %f %c",&s.id,&s.per,&s.name);
printf("%d %f%c",s.id,s.per,s.name);
}
