#include<stdio.h>
#pragma once
struct s
{
int a;
char b;
float c;
}p;

int main()
{
p.a=1,p.b='c',p.c=2.3;
printf("%p\n",p.a);
printf("%p\n",p.b);
printf("%p\n",p.c);
}
