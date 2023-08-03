/*2.WAP to print binary*/

#include<stdio.h>
void print_binary(int);
int main()
{
int x;
	printf("enter a number\n");
	scanf("%x",&x);
	print_binary(x);
}

void print_binary(int x)
{
	int i;
	for(i=0;i<8;i++)
	{
		if(x&(0x80))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		x=x<<1;
	}
}


