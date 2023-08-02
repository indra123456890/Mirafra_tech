/*#include<stdio.h>
#include<string.h>
union Data
{
int i;
float f;
char str[10];
};

int main()
{
union Data data;
{
data.i=10;
printf("data %d",data.i);
data.f=1.4;
printf("%f",data.f);
strcpy(data.str,"hello");
printf("%s",data.str);
}
}*/


#include<stdio.h>
#include<string.h>
union Data
{
int i;
float f;
char c;
};
int main()
{
union Data data;
printf("enter the values");
scanf("%d%f%c",&data.i,&data.f,&data.c);
printf("%d%f%c",data.i,data.f,data.c);
}

