//using generic mask set 7th to 10th bit

#include<stdio.h>
int main()
{
unsigned int n=0x055;
unsigned int mask=0x0F<<7;
int r;
r=n|mask;
printf("%d",r);
}
