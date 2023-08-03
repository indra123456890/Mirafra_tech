/*Write a program to store and print the roll no., name , age and marks of a student using structures.*/

//user input
/*#include<stdio.h>
struct student
{
int rno;
char name[50];
int age;
};

int main()
{
struct student s;
{
printf("enter the name\n,enter rno\n,enter age\n");
scanf("%s %d %d\n",s.name,&s.rno,&s.age);
printf("%s %d %d\n",s.name,s.rno,s.age);
}
}*/


#include<stdio.h>
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
}




