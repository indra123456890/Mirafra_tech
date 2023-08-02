#include<stdio.h>
int main()
{
int a,i=0,c=0;
scanf("%d",&a);
for(i=0;i<=a;i++)
{
//while(a>0)
if(a%i==0)
{
c++;
}
}
if(c==2)
{
printf("is prime ");
}
else
{
printf("not prime");
}
}

