#include<stdio.h>
int main()
{
char a='x';
char *p1=&a;
int b=12;
int *p2;
p2=&b;
printf("%d %d",sizeof(p1),sizeof(*p1));
printf("%d %d",sizeof(*p2),sizeof(p2));
}
