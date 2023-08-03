/*3.WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?*/

#include<stdio.h>
int main()
{
	int x,i,count=0;
	printf("enter the number");
	scanf("%d",&x);
	for(i=0;i<8;i++)
	{
		if(x&(0x80))
		{
			printf("1");
			count++;
		}
		else
			printf("0");
		x=x<<1;
	}
	printf("\n");
	printf("no of 1's=%d",count);
}

