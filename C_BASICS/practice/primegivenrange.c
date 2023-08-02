#include<stdio.h>
int main()
{
int i,j,x,y,c;
printf("enter starting number");
scanf("%d",&x);
printf("enter ending number");
scanf("%d",&y);
for(i=x;i<=y;i++)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
c++;
}
}
if(c==2)
{
printf("%d is prime",i);
}
}
}

