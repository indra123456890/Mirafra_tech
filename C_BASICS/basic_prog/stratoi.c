#include<stdio.h>
int  strrratoi(char a[])
{
int s=0,i;
for(i=0;a[i]!=0;i++)
{
s=(s*10)+a[i]-'0';
}
return s;
}

int main()
{
int r;
char a[50]={"123"};
r=strrratoi(a);
printf("%d",r);
}
