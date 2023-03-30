#include<stdio.h>
int main()
{
int x,y;
printf("enter number\n");
scanf("%d",&x);
printf("enter number 2\n");
scanf("%d",&y);
x=x^y;
y=x^y;
x=x^y;
printf("after swap %d %d",x,y);
}
