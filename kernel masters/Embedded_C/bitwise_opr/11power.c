/*11. WAP whether a number is a power of 2 or not?*/

#include<stdio.h>
int main()
{
int n,c=0;
printf("enter a number\n");
scanf("%d",&n);
while(n)
{
n=n&n-1;
c++;
}
if(c==1)
{
printf("given number is power of 2\n");
}
else
{
printf("given no is not power of 2\n");
}
}
