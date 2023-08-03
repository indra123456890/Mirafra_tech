#include<stdio.h>
char *strchr1(char *s,char c);
int main()
{
char s[50];
char c;
printf("enter the string:\n");
scanf("%s",s);
printf("enter a character:\n");
scanf(" %c",&c);
strchr1(s,c);
printf("%p",s);
}

 
 char *strchr1(char *s,char c)
{
int i=0;
while(*s)
{
if(*s==c)
return s;
else
s++;
}
return s;
}
