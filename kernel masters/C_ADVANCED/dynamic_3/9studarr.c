//9) Sort the above student array based on their percentage of marks in ascending order.
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char n[50];
	char f[50];
	int id;
	int d;
	int marks[6];
	int y;
	int m;
	int d1;
	int m1;
	int y1;
	float per;
};
void fun(struct student *s,int a);
int main()
{
	int a,i,j,sum;
	printf("enter number of students\n");
	scanf("%d",&a);
	struct student *s;
	s=((struct student*)malloc(a*sizeof(struct student)));
	for(i=0;i<a;i++)
	{
		sum=0;
		printf("name::fathername::ID::DOB::DOJ::marks\n");
		scanf("%s %s%d%d-%d-%d%d-%d-%d",s[i].n,s[i].f,&s[i].id,&s[i].d,&s[i].m,&s[i].y,&s[i].d1,&s[i].m1,&s[i].y1);
		for(j=0;j<6;j++)
		{
			scanf("%d",&s[i].marks[j]);
			sum=sum+s[i].marks[j];
			s[i].per=sum/6;
		}
	}
	fun(s,a);
	for(i=0;i<a;i++)
	{
		printf("name::%s\tfan::%s\tid::%d\td0b::%d-%d-%d\tdoj::%d-%d-%d\tper::%f\t",(s+i)->n,(s+i)->f,((s+i)->id),((s+i)->d),((s+i)->m),((s+i)->y),((s+i)->d1),((s+i)->m1),((s+i)->y1),((s+i)->per));
		printf("\n");
	}
}
void fun(struct student *s,int a)
{
int i,j;
	struct student s1;
	for(i=0;i<(a-1);i++)
	{
		for(j=0;j<(a-1);j++)
		{
			if(s[j].per>s[j+1].per)
			{
				s1=s[j];
				s[j]=s[j+1];
				s[j+1]=s1;
			}
		}
	}
}

