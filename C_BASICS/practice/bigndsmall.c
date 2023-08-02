#include<stdio.h>
int main()
{
int big,small,n,a,i=0;
printf("enter how many elements");
scanf("%d",&n);
printf("enter elements");
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
printf("big is %d\n small is %d\n",big,small);
}
