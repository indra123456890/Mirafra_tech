#include<stdio.h>
void streplace(char s[],char c,char b)
{
int i;
for(i=0;s[i]!=0;i++)
{
if(c==s[i])
s[i]=b;
}
printf("%s\n",s);
}
                                                                        
int main()
{
char s[100],c,b;
printf("str:");
scanf("%s",s);
printf("char:");
scanf(" %c",&c);
printf("replace char:");
scanf(" %c",&b);
streplace(s,c,b);
}

