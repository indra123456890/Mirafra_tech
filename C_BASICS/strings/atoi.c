#include<stdio.h>
int atoi(char a[])
{
int s=0,i,d=1;
for(i=0;a[i]!='\0';i++)
{
s=(s*10)+a[i]-48;
}
return s;
}
int main()
{
char a[50];
int b;
scanf("%s",a);
b=atoi(a);
printf("%d\n",b);
}
