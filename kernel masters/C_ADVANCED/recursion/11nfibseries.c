//displays the fib nums upto given pos
/*#include<stdio.h>
int fibseries(int n)
{
static int a=1,b=1,c;
if(n==0)
{
return 0;
}
else
{
a=b;
b=c;
c=a+b;
printf("%d",c);
}
return fibseries(n-1);
}

int main()
{
int n;
printf("enter term position");
scanf("%d",&n);
fibseries(n);
}*/


//Another method prints exact num at given pos

#include<stdio.h>
void fib(int n)
{
int a=0,b=1,c,i=0;
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
printf("%d",c);
}
int main()
{
int n;
printf("enter the pos  to print  fib num in that pos");
scanf("%d",&n);
fib(n);
return 0;
}
