/*1) Take two layers (two source files, producer.c , consumer.c & one header file layer.h). In producer.c, define a structure variable , create its data and send it to consumer.c, via
1 ) Call by Value
2 ) Call by Reference
in consumer.c , print the data of the structure in a neat format.
in layer.h file create the below structure template.
struct student {
 int ID;
 char name[30];
 float per;
}"*/


#include"layer.h"
void value(struct student s);
void reference(struct student *s);
int main()
{
struct student s;
{
printf("enter id\n,enter name\n,enter per\n");
scanf("%d%s%f",&s.id,s.name,&s.per);
value(s);
reference(&s);
}
}
