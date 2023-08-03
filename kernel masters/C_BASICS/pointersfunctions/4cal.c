#include<stdio.h>
void cal(int *add,int *sub,int *mul,int *div,int *rem,int x,int y);
int main()
{
int x,y;
int a,s,m,d,r;
printf("enter the two values:\n");
scanf("%d%d",&x,&y);
cal(&a,&s,&m,&d,&r,x,y);
printf("add:%d\n sub:%d\n mul:%d\n div:%d\n rem:%d\n ",a,s,m,d,r);
}


void cal(int *add,int *sub,int *mul,int *div,int *rem,int x,int y)
{
*add=x+y;
*sub=x-y;
*mul=x*y;
*div=x/y;
*rem=x%y;
}


