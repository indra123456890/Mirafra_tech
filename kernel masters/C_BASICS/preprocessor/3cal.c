/*3 Implement calculator program using macros. Write down your own header file ,where the calculator operations are written as macros are defined(ADD,SUB,MUL,DIV).*/
#include<stdio.h>
#include"3my.h"
int main()
{
	int a,b;

	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	printf("add=%d\n",ADD(a,b));
	printf("sub=%d\n",SUB(a,b));
	printf("mul=%d\n",MUL(a,b));
	printf("div=%d\n",div(a,b));
}

