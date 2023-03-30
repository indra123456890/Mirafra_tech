/*#include<stdio.h>
int main()
{
int i,n=3;
if(n&(n-1)==(n-1))
{
printf("is prime number\n");
}
else
{
printf("not prime number\n");
}
}*/


//for given range

#include<stdio.h>
int main()
{
int i,j,min=3,max=10;
for(i=min;i<=max;i++)
{
for(j=1;j<=i;j++)
{
if(i&(i-1)==(i-1)&&(j&(j-1)==(j-1)))
{
printf("%d",i);
}
}
}
}


