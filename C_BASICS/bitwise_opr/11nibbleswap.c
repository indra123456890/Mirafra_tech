#include<stdio.h>
int main()
{
int n;
printf("enter the value\n");
scanf("%d",&n);
n=((n&0xf0)>>4)|((n&0x0f)<<4);
printf("%d\n",n);
}
