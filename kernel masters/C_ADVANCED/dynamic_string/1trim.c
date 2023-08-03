/*1)  "Write a trim() function,that will remove the leading and trailing spaces from a string.
eg., Input : ""    str  str   ""
Output : ""str str"""*/


#include<stdio.h>
#include<stdlib.h>
void fun(char *str);
int main()
{
char *str=(char *)malloc(100);
printf("enter a string");
scanf("%[^\n]s",str);
fun(str);
}


void fun(char *str)
{
int i=0,c=0;
for(i=0;str[i]==32;i++)
{
c++;
}
for(i=0;str[i]!='\0';i++)
{
str[i]=str[i+c];
}
for(i=i-c-1;str[i]==32;i--)
{
str[i]='\0';
}
printf("%s",str);
}

