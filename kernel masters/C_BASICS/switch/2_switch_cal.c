#include<stdio.h>
int main()
{
int a,b;
char ch;
scanf("%d%c%d",&a,&ch,&b);
switch(ch)
{
case '+':
printf("%d\n",a+b);
break;
case '-':
printf("%d\n",a-b);
break;
case '*':
printf("%d\n",a*b);
break;
case '/':
printf("%d\n",a/b);
break;
case '%':
printf("%d\n",a%b);
break;
}
}
