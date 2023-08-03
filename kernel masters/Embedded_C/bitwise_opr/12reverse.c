#include<stdio.h>
int main()
{
int n,i;
printf("enter a number");
scanf("%d",&n);
printf("after reversing number in binary");
for(i=0;i<8;i++)
{
if(n&0x1)
{
printf("1");
}
else
{
printf("0");
}
n=n>>1;
}
}


