 /* 6 WAP to print a range of prime numbers. Use macro,to find if a number is prime or not.*/

#include<stdio.h>
#define IsPRIME(x,y) int i,p;\
	for(x;x<=y;x++)\
{\
	p=0;\
	for(i=1;i<y;i++)\
	{\
		if(x%i==0)\
		p++;\
	}\
	if(p==2)\
	printf("%d\n",x);\
}\
printf("\n");\

int main()
{
	int x,y;
	printf("enter 1st  number");
	scanf("%d",&x);
	printf("enter 2nd number");
	scanf("%d",&y);
	IsPRIME(x,y);
}
