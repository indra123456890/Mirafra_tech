
//prints fib nums upto given pos
#include<stdio.h>
int main()
{
int n1=0,n2=1,n3,n,i=0;
printf("enter no of inputs");
scanf("%d",&n);
printf("%d %d",n1,n2);
for(i=2;i<n;i++)
{
n3=n1+n2;
printf("%d",n3);
n1=n2;
n2=n3;
}
return 0;
}
