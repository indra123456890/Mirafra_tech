/*1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.*/

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
	int(*p)(int,int);
	p=add;
	printf("add is:%d\n",p(a,b));
	p=sub;
	printf("sub is:%d\n",p(a,b));
	p=mul;
	printf("mul is:%d\n",p(a,b));
	p=div;
	printf("div is:%d\n",p(a,b));
	p=mod;
	printf("mod is:%d\n",p(a,b));



	p=&add;
	printf("add is:%d\n",(*p)(a,b));
	p=&sub;
	printf("sub is:%d\n",(*p)(a,b));
	p=&mul;
	printf("mul is:%d\n",(*p)(a,b));
	p=&div;
	printf("div is:%d\n",(*p)(a,b));
	p=&mod;
	printf("mod is:%d\n",(*p)(a,b));
}
