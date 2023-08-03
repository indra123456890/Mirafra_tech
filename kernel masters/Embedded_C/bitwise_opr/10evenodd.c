/*10.WAP whether a number is ODD or EVEN using bitwise*/

#include<stdio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
if(n&(0x01))
{
printf("%d is odd",n);
}
else
{
printf("%d is even",n);
}
}
