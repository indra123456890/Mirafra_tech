/*4 WAP to print if  a character is alphanumeric , using macros.*/
#include<stdio.h>
#define ISNUM(c)(c>=48&&c<=57)
#define ISALPHABET(c)(c>=65&&c<=122)
int main()
{
char c;
printf("enter a character");
scanf("%c",&c);
if(ISNUM(c))
{
printf("is a number");
}
else if(ISALPHABET(c))
{
printf("is an alphabet");
}
else
{
printf("is not an alphanumeric");
}
}
