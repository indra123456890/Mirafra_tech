#include<stdio.h>
int noofwords(char s[])
{
int i=0,c=0;
{
for(i=0;s[i]!=0;i++)
{
if(s[i]==32||s[i]==34||s[i]==39||s[i]==44||s[i]==46)
{
c++;
}
}
return c;
}
}

int main()
{
int x;
char s[200];
printf("enter the words");
scanf("%99[^\n]s",s);
x=noofwords(s);
printf("%d",x);
return 0;
}
