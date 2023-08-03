//2)  WAP copy 0x20 data in to 0x7800 memory location? 
#include<stdio.h>
int main()
{
int *x=((int*)0x7800);
*x=20;
printf("%p\n",x);
}

