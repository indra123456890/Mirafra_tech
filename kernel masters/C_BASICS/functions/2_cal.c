/*2)Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.
Hint: int add(int , int);
int sub (int, int);*/

#include<stdio.h>
float add(float a,float b)
{
float c;
c=a+b;
return c;
}
float sub(float a,float b)
{
float c;
c=a-b;
return c;
}
float mul(float a,float b)
{
float c;
c=a*b;
return c;
}
float div(float a, float b)
{
float c;
c=a/b;
return c;
}
int mod(int a,int b)
{
int e;
e=a%b;
return e;
}


int main()
{
float a,b,c;
char d;
int e;
printf("enter 2 numbers");
scanf("%f%c%f",&a,&d,&b);
if(d=='+')
{
c=add(a,b);
printf("%.2f\n",c);
}
else
{
if(d=='-')
{
c=sub(a,b);
printf("%.2f\n",c);
}
else
{
if(d=='*')
{
c=mul(a,b);
printf("%.2f\n",c);
}
else
{
if(d=='/')
{
c=div(a,b);
printf("%.2f\n",c);
}
else
{
if(d=='%')
{
e=mod(a,b);
printf("%d\n",e);
}
return 0;
}
}
}
}
}
