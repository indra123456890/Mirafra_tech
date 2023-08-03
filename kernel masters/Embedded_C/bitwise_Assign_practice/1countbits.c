#include<stdio.h>
int count_bits(int x);
int main()
{
	int x,b;
	printf("enter the number");
	scanf("%d",&x);
	b=count_bits(x);
	printf("\n");
	printf("no of 1's=%d",b); 
} 


int count_bits(int x)
{
	int count,i;
	while(x!=0)
	{
		if(x&(0x01))
		{
			printf("1");
			count++;
		}
		else
		{
			printf("0");
		}
		x=x>>1;
	}
	return count;
}

