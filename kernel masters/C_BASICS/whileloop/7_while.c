#include<stdio.h>
int main()
{
int a,b,i=2,n;
printf("enter number of values:");
scanf("%d",&n);
printf("enter 1 value:");
scanf("%d",&a);
while(i<=n)
{
printf("enter %d value:",i);
scanf("%d",&b);
if(a>b)
{
printf("Sorry, Thats smaller than previous number.\n");
}
else
{
a=b;
i++;
}
}
printf("Thank you for the successful inputs.\n");
return 0;
}
