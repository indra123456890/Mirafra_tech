/*WAP implement addition functionality with out using ADD('+') Operator.*/ 


#include<stdio.h>
int main()
{
int a,b,x;
printf("enter two numbers");
scanf("%d%d",&a,&b);
x=(a-(~b)-1);
printf("%d",x);
}
