
#include<stdio.h>
int main()
{
int a,b,i=0;
printf("enter a input:\n");
scanf("%d",&a);
while(i<=a)
{
scanf("%d",&b);
if(b>0)
{
printf("positive:\n");
}
else
if(b<0)
{
printf("negative:\n");
}
else
if(b==0)
{
printf("zero:\n");
}
i++;
}
return 0;
}
