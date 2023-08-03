/*2)Rewrite the calculator program using array of function pointers.*/

#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
int main()
{
	int a=10,b=2;
	int(*p[5])(int,int);
	p[0]=add;
	printf("add is:%d\n",(*p[0])(a,b));

	p[1]=&sub;
	printf("sub is:%d\n",(*p[1])(a,b));
	p[2]=&mul;
	printf("mul is:%d\n",(*p[2])(a,b));
	p[3]=&div;
	printf("div is:%d\n",(*p[3])(a,b));
	p[4]=&mod;
	printf("mod is:%d\n",(*p[4])(a,b));
}


