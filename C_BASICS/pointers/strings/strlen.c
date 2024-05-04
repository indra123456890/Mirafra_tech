#include<stdio.h>
int  strllen(char *k)
{
int i=0;
while(*k!='\0')
{
k++;
i++;
}
return i;
}
int main()
{
char *s="indra";
int l;
l=strllen(s);
printf("%d",l);
}
