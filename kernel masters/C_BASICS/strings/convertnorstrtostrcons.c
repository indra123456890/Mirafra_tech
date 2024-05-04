#include<stdio.h>
int main()
{
char s[10]={'i','n','d','r','a'};
char k[10];
int i,j=0;
/*for(i=0;s[i]!='\0';i++)
{
k[j]=s[i];
j++;
}*/

s[5]='\0';
printf("%s",s);
}
