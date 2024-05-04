#include<stdio.h>
#include"my.h"
void somefun(int n)
{
printf("%d",n);
}
int main()
{
extern int x;
somefun(x);
}
