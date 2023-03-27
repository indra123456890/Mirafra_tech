#include<stdio.h>
union student
{
int id;
double marks;
char name;
};
int main()
{
union student t;
t.id=10;
printf("%d",t.id);
t.marks=20.30;
printf("%f",t.marks);
t.name='a';
printf("%c",t.name);

printf("size of union is %d",sizeof(t));
}

