#include<stdio.h>
int main()
{
int a=0xA,b=0x8,c=0;
int r;
r=a^b;
while(r)
{
if(r&1==1)
{
c++;
}
r=r>>1;
}
printf("%d",c);
}
