#include<stdio.h>
unsigned int n=0x055;
unsigned int mask=0;
int main()
{
int i,r;
for(i=7;i<=10;i++)
{
mask=mask|(1<<i);
}
r=n|mask;
printf("%x",r);
}
