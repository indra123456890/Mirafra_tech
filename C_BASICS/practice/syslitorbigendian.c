#include<stdio.h>
int main()
{
char a[2];
a[0]=1;
a[1]=2;
if((&a[1]-&a[0]<0))
{
printf("system is little");
}
else
{
printf("system is big");
}
}
