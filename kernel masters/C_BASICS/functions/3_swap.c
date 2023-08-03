/*3)Write a function ,that can take two integers, swap their values and print their new values in function itself. function return type should be void.*/


#include<stdio.h>
int swap(int a,int b)
{
	int c,t;
	t=a;
	a=b;
	b=t;
	printf("after swap %d %d\n",a,b);
}
int main()
{
	int a,b,c;
	printf("enter 2 numbers:");
	scanf("%d %d",&a,&b);
	printf("before swap %d %d\n",a,b);
	c=swap(a,b);
}
