#include<stdio.h>
void strrev(char s[])
{
int i,j;
char c;
for(i=0;s[i]!='\0';i++)
{
j=i;
}
for(i=0;i<=j;i++,j--)
{
c=s[j];
s[j]=s[i];
s[i]=c;
}
printf("%s",s);
}
int main()
{
char s[100];
printf("enter string");
scanf("%s",s);
strrev(s);
}
