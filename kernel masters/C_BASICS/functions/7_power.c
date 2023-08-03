#include<stdio.h>
int power(int a,int n)
{
int b=1,i=1;
while(i<=a)
{
b=b*n;
i++;
}
return b;
}

int main()
{
int a,b,n;
printf("enter n,a value");
scanf("%d%d",&n,&a);
b=power(a,n);
printf("%d",b);
}
