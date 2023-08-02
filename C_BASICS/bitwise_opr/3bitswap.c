/*write a program to swap the bits from 2 3 to 6 7 take 16bit

#include<stdio.h>
int main()
{
short int n=0x53;
short int a,b,c,v,x;
if(((n>>2)&3)==a)
{
if(((n>>6)&3)==b)
{
while(c=a^b)
{
v=c^a;
x=c^b;
}
}
}
printf("after swap %d %d\n",v,x);
}

#include<stdio.h>
int main()
{
int n=0x53,c;
//scanf("%x",&n);
if(c=((n>>2)&3)!=((n>>6)&3))
{
n=(n^((c<<2)|(c<<6)));
}
printf("%d",n);
}*/


#include<stdio.h>
int main()
{
int n,temp;
printf("enter a number");
scanf("%x",&n);
temp=((n>>2)&3)^((n>>6)&3);
n=n^((temp<<2)|(temp<<6));
printf("after swapping %d\n",n);
}



