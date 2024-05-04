#include<stdio.h>
int main()
{
int n=1;
p:if(n<101)
{
printf("%d\n",n);
n++;
goto p;
}
}
