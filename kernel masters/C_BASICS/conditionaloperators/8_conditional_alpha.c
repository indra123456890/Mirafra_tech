#include<stdio.h>
int main()
{
	char c;
	printf("enter an alphabet:");
	scanf("%c",&c);
	c<65?printf("it is not an alphabet.\n"):c<=90?printf("it is upper case alphabet.\n"):c<97?printf("it is not an alphabet.\n"):c<=122?printf("it is lowercase alphabet.\n"):printf("it is not an alphabet.\n");
	return 0;
}
