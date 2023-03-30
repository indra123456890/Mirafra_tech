#include<stdio.h>
int  mystrlchr(char s[],char c)
{
int i,j=-1;
for(i=0;s[i]!=0;i++)
{
if(c==s[i])
j=i;
}
return j;
}
int main()
{
int k;
char s[100],c;
printf("enter string\n");
scanf("%s",s);
printf("enter character\n");
scanf(" %c",&c);
k=mystrlchr(s,c);
printf("last occurence is %d:\n",k);
}
