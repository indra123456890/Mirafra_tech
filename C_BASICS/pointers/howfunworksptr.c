#include<stdio.h>
int *funn(int *n,int *n1)
{
if(*n>*n1)
return n;
else
return n1;
}
int main()
{
int n=1,n1=2;
int *p;
p=funn(&n,&n1);
printf("%d",*p);
}
