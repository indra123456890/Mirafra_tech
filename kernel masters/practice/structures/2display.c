/*Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no 2..*/


#include<stdio.h>
int main()
{
	int i;
	struct student
	{
		int rno;
		int age;
		char name[50];
	};
	struct student s[5];
	{
		for(i=0;i<=4;i++)
			printf("enter the rno\n");
		s[i].rno=i+1;
		printf("enter age\n");
		scanf("%d",&s[i].age);
		printf("enter the name\n");
		scanf("%s",s[i].name);
	}
	for(i=0;i<=4;i++)
	{
		if(s[i].rno==2)
		{
			printf("student %d\n",i+1);
			printf("rollno:%d\n",s[i].rno);
			printf("student name %s\n",s[i].name);
			printf("std age %d\n",s[i].age);
		}
	}
	return 0;
}
