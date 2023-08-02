/*#include<stdio.h>
#define e 0x55
#define o 0xAA

int main()
{
unsigned int x=0x36;
unsigned int a,b,c;
a=x&e;
b=x&e;
a=a<<1;
b=b>>1;
c=(a|b);
printf("%x",c);
}*/


#include<stdio.h>
int main()
{
	short int x=0x65;
	int i,j;
	for(i=0,j=i+1;i<8;i++)
	{
		if(((x>>i)&1)!=(x>>j)&1)
		{
			x=x^(1<<i);
			x=x^(1<<j);
		}
	}
	printf("%x",x);
}
