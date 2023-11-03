#include<stdio.h>
void strpalindrome(char s[])
{
int i,j,c=0;
for(i=0;s[i]!='\0';i++)
{
for(j=i-1;s[j];j--)
{
if(s[i]==s[j])
{
c=1;
}
}
}
if(c==1)
{
printf("is palindrome");
}
else
{
printf("not palindrome");
}
}
int main()
{
char s[100];
printf("enter string");
scanf("%s",s);
strpalindrome(s);
}
