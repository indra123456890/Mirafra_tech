#include<stdio.h>
#include<string.h>
int mystrlen(char str[])
{
int i=0;
while(str[i]!='\0')
{
i++;
}
return i;
}

int main()
{
int i;
char str[]="kernelmasters";
i=mystrlen(str);
printf("%d\n",i);
}
