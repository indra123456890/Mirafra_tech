#include<stdio.h>
int main()
{
int n,i=0;
printf("enter numbers");
scanf("%d",&n);
while(i<n)
{
if(n<0)
{
printf("biggest number %d",n);
}
else
{
printf("smallest number %d",n);
i++;
}
}
}
