#include<stdio.h>
void reverse(char *s)
{
int i,j;
char c;
for(i=0;*(s+i)!='\0';i++)
{
j=i;
}
for(i=0;i<j;i++,j--)
{
c=*(s+i);
*(s+i)=*(s+j);
*(s+j)=c;
}
printf("%s",s);

}
int main()
{
char s[6]="indra";
reverse(s);
}
