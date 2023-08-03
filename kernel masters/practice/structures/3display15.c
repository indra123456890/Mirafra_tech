/*Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.*/


#include<stdio.h>
int main()
{
int i;
struct student
{
int rno;
int age;
char name[50];
int address;
};
struct student s[15];
{
for(i=0;i<=3;i++)
{
printf("enter rno\n");
scanf("%d",&s[i+1].rno);
printf("enetr name\n");
scanf("%s",s[i].name);
printf("enter age\n");
scanf("%d",&s[i].age);
printf("enter address\n");
scanf("%d",&s[i].address);
}
}
}
