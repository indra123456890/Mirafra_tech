#include<stdio.h>
int main()
{
char a,b;
printf("enter characters ");
scanf("%c %c",&a,&b);
char *p1=&a;
char *p2=&b;
if(*p1>*p2)

printf("higher ascii value is: %c",a);

else
 printf("higher ascii value: %c",b);
}


