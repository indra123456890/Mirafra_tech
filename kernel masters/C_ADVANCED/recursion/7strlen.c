#include<stdio.h>
int strl(char *s)
{
static int count=0;
if(*s==0)
{
return count;
}
else
{
count++;
return strl(s+1);
}
}

int main()
{
char s[50];
printf("enter the string");
scanf("%[^\n]s",s);
//strl(s);
printf("str length is %d",strl(s));
}
