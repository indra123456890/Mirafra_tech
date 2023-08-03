#include<stdio.h>
int add(void);
int sub(void);
int mul();
int div();
int mod();

int a,b;

int main()
{
char ch;
scanf("%d %c %d",&a,&ch,&b);
if(ch=='+')
{
printf("%d\n",add());
}
if(ch=='-')
{
printf("%d\n",sub());
}
if(ch=='*')
{
printf("%d\n",mul());
}
if(ch=='/')
{
printf("%d\n",div());
}
if(ch=='%')
{
printf("%d\n",mod());
}
}


int add()
{
int c;
c=a+b;
return c;
}
int sub()
{
int c;
c=a-b;
return c;
}
int mul()
{
int c;
c=a*b;
return c;
}
int div()
{
int c;
c=a/b;
return c;
}
int mod()
{
int c;
c=a%b;
return c;
}
