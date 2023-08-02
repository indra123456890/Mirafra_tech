#include<stdio.h>
int main()
{
int n;
scanf("%x",&n);
n=((n&0xF0)>>4)|((n&0x0F)<<4);
printf("%x",n);
}

