#include<stdio.h>
int s=0;//suppose if iwant to return val from display fun to main
int sum(int x,int y)
{
return x+y;
}
int display(int(*fp)(int,int))
{
//int s=0;//to print value returned from sum..take a local var 
s=(*fp)(1,2);
//printf("%d",s);//after returning displayed here
return s;
}
int main()
{
//int s=0;
int k=0;
k=display(&sum);
printf("%d",k);
}
