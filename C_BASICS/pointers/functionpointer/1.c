/*#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
int main()
{
int a=5,b=6;
int (*p)(int,int);
p=&add;
printf("%d",(*p)(a,b));
}*/

//easy
#include<stdio.h>
int sum(int x,int y)
{
return x+y;
}
int main()
{
int s=0;
int a=2,b=3;
int (*p)(int,int)=&sum;
s=(*p)(a,b);
printf("%d",s);
}
