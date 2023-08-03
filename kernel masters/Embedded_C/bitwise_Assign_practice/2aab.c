#include<stdio.h>
int main()
{
unsigned int a=0xaabbccdd;
printf("%x\n",a>>20&0xfff);
printf("%x\n",a&0xfffff);
}
