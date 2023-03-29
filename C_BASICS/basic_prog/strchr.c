#include<stdio.h>
int strrrchr(char s[],char c)
{
int i;
for(i=0;s[i]!=0;i++)
{
if(c==s[i])
return i;
}
return -1;
}

int main()
{
int k;
char s[100];
char c;
scanf("%s",s);
scanf(" %c",&c);
k=strrrchr(s,c);
printf("%d",k);
}
