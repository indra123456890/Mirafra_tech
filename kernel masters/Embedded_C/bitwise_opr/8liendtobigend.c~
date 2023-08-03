/*8 WAP to convert Little endian integer to Big endian integer*/

#include<stdio.h>
int main()
{
	int a,x;
	printf("please enter the adress\n");
	scanf("%x",&a);
	x=(a<<24)|(a>>24)|((a>>8)&(0x0000ff00))|((a<<8)&(0x00ff0000));
	printf("BIG ENDIAN adress : 0x%x\n",x);

}

