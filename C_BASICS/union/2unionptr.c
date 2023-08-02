#include<stdio.h>
#include<string.h>
union Data
{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data data;
	union Data *p=&data;

	p->i=20;
	printf("%d",p->i);
	p->f=6.0;
	printf("%f",p->f);
	strcpy(p->str,"indra");

	printf("%s",p->str);
}

