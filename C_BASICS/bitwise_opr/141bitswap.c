#include<stdio.h>
int main()
{
unsigned int x;
scanf("%x",&x);
if(((x>>6)&1)!=((x>>3)&1))
{
x=x^(1<<6);
x=x^(1<<3);
}
printf("%x",x);
}
