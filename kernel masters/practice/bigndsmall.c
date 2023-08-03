#include<stdio.h>
int main()
{
int n,a,big,small,i=0;
printf("enter total no of elements");
scanf("%d",&n);
printf("enter the numbers");
scanf("%d",&a);
big=a;
small=a;
for(i=0;i<n-1;i++)
{
scanf("%d",&a);
if(a>big)
{
big=a;
}
if(a<small)
{
small=a;
}
}
printf("big=%d\n small=%d\n",big,small);
}
