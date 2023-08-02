#include<stdio.h>

int main()
{
	int x=0x12345678;
	char *p=(char *)&x;
	if(*p==0x78)
		printf("Little endian\n");
	else
		printf("Big  endian\n");
		
}
