#include<stdio.h>
int main()
{
int n,r,big=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
while(r>big)
{
big=r;
}
n=n/10;
}
printf("%d\n",big);
}
