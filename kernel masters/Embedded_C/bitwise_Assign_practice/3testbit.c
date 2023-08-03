/*3. Write a testbit() function. This function requires two 16-bit integer parameters. [10M]

The first parameter is a 16-bit value to test; the second parameter is a value in the range 0..15 describing which bit to test.

The function should return tr0ue if the corresponding bit contains a one, the function should return00 false if that bit position contains a zero.

The function should always return false if the second parameter holds a value outside the range 0..15.*/


#include<stdio.h>
int setbit(short int x,short int p);
int main()
{
  short	int p,x;
int b;
	printf("enter number");
	scanf("%hd",&x);
	printf("enter position");
	scanf("%hd",&p);
	b=setbit(x,p);
	printf("%d",b);
}

int setbit(short int x,short int p)
{
	if(p>=0&&p<=15)
	{
		if(x&(0x01<<p))
		{
			return 1;
		}
		else
			return 0;
	}
	return 0;
}

