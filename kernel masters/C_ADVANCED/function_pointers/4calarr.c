
/*4)
"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);


invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
}*/






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


void invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
switch(ch)
{
case'+':printf("%d\n",(fptr[0](x,y)));break;
case'-':printf("%d\n",(fptr[1](x,y)));break;
case'*':printf("%d\n",(fptr[2](x,y)));break;
case'/':printf("%d\n",(fptr[3](x,y)));break;
case'%':printf("%d\n",(fptr[4](x,y)));break;
}
}

int main()
{
int x,y;
char ch;
printf("enter values");
scanf("%d %d",&x,&y);
printf("enter operator");
scanf( " %c",&ch);
int(*fptr[])(int,int)={add,sub,mul,div,mod};
switch(ch)
{
case '+':invokeptr(fptr,x,y,ch);break;
case '-':invokeptr(fptr,x,y,ch);break;
case '*':invokeptr(fptr,x,y,ch);break;
case '/':invokeptr(fptr,x,y,ch);break;
case '%':invokeptr(fptr,x,y,ch);break;
}
}


