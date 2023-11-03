#include<stdio.h>
int main()
{
int i,j,c;
for(i=1;i<=10;i++)
{
c=0;
for(j=1;j<=10;j++)
{
if(i%j==0)
{
c++;
}
}
if(c==4)
{
printf("%d",i);
}
}
}

