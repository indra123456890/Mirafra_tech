/*2 ) Define a student template with below information.
ID, name, marks of 6 subjects as an array, fathername, day ,month & year of birth, day,month&year of joining, percentage.
Initialize a student variable with appropriate data and print all members. Write a function that takes the structure as argument , reads the data using scanf, calculates the percentage of marks for the student and update percentage member. write a print function to print the data.*/

#include<stdio.h>
struct student s;
{
int ID,marks[6];
int d,m,y;
int d1,m1,y1;
float per;
};
void fun(struct student s);
{
int main()
{
	int 
	printf("enter ID\nenter name\nenter fathername\nenter dob\nenter marks\nenter doj\nenter per");
	scanf("%d %s %s %d%d%d %d%d%d %f",&s.ID,s.name,s.fname,&s.d,&s.m,&s.y,&s.d1,&s.m1,&s.y1,&s.per);
	fun(s);
}

void fun (struct student s)
{
printf("enter marks\n");
	for(i=0,sum=0;i<6;i++)
	{
		scanf("%d",&s.marks[i]);
		sum=sum+s.marks[i];
		s.per=(sum/6)*100;
		printf("ID=%d\n name=%s\n fname=%s\n dmy=%d%d%d d1m1y1=%d%d%d fname=%s\n per:%f\n",s.ID,s.name,s.fname,s.d,s.m,s.y,s.d1,s.m1,s.y1,s.per);
	}
}
}


