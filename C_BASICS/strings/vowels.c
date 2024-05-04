#include<stdio.h>
int main()
{
char s[10]="indra";
int i=0,c=0;
while(s[i]!='\0')
{
if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u')
{
c++;
}
i++;
}
printf("%d",c);
}
