#include<stdio.h>
int fun_alpha_num(char c)
{
int x;
if(c>=97&&c<=122||c>=65&&c<=90)
x=1;
else if(c>=48&&c<=57)
x=0;
return x;
}

int main()
{
int x;
char c;
printf("enter a value");
scanf("%c",&c);
if(c>=97&&c<=122||c>=65&&c<=90||c>=48&&c<=57)
{
x=fun_alpha_num(c);
if(x==1)
printf("alphabet\n");
else if(x==0)
printf("it is a  number\n");
}
else
printf("It is not number or Alphabet\n");
}
