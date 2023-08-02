#include<stdio.h>
int stratoi(char a[])
{
int s=0,i;
for(i=0;a[i]!='\0';i++)
{
s=(s*10)+a[i]-48;
}
return s;
}
int main()
{
int k;
char a[100]="123";
printf("enter string");
scanf("%s",a);
k=stratoi(a);
printf("%d",k);
}
