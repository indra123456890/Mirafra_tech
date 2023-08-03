#include<stdio.h>
int main()
{
int x=10111010;
while(x&(0x01))
{
printf("%d",x);
}
}


