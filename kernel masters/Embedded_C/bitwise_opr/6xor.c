/*6.WAP implement XOR functionality with out using XOR(^) operator.*/
#include<stdio.h>
int main()
{
int x,y,c;
printf("enter two numbers");
scanf("%d%d",&x,&y);
c=((~x)&y)|((~y)&x);
printf("%d",c);
}
