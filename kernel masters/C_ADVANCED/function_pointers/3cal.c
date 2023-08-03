/*3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In main function, simply invoke this function by sending appropriate function address, based on operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);


invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"*/

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

void invokeptr(int (*fptr)(int,int) ,int x,int y)
{
printf("%d",fptr(x,y));
}



int main()
{
int x,y;
char ch;
printf("enter values");
scanf("%d %c %d",&x,&ch,&y);
switch(ch)
{
case'+':invokeptr(add,x,y);break;
case'-':invokeptr(sub,x,y);break;
case'*':invokeptr(mul,x,y);break;
case'/':invokeptr(div,x,y);break;
case'%':invokeptr(mod,x,y);break;
}
}
