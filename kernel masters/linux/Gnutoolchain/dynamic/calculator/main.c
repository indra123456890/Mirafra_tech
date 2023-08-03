#include<stdio.h>
int addfunction(int a,int b);
int subfunction(int a,int b);
int main()
{
int a,b,x,y;
char ch;
printf("enter two numbers");
scanf("%d%c%d",&a,&ch,&b);
if(ch=='+')
{
x=addfunction(a,b);
printf("%d\n",x);
}
else if(ch=='-')
{
y=subfunction(a,b);
printf("%d\n",y);
}
}
