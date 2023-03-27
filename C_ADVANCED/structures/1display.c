//with intialization

/*#include<stdio.h>
int main()
{
struct student 
{
int age;
int rno;
char name[50];
};
struct student s={18,196,"indra"};
printf("%d\n %d\n %s\n",s.age,s.rno,s.name);
}*/



//without intialization

#include<stdio.h>
struct student
{
int age;
int rno;
char name[50];
};
int main()
{
struct student s;
{
printf("enter age\n enter rno\n enter name\n");
scanf("%d %d %s\n",&s.age,&s.rno,s.name);
printf("%d %d %s\n",s.age,s.rno,s.name);
}
}
