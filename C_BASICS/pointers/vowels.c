#include<stdio.h>
void vowels(char *s)
{
int i=0,c=0,k=0;
while(*(s+i)!='\0')
{
if(*(s+i)=='a'||*(s+i)=='e'||*(s+i)=='i'||*(s+i)=='o'||*(s+i)=='u')//mistake everytime condition checked with *s=='a'||*s=='e'like this but use *(s+i)
{
c++;
//i++;
}
else
{
k++;
//i++;
}
i++;
}
printf("%d %d",c,k);
}
int main()
{
char s[10]="string";
vowels(s);
}
