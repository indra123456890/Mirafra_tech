#include<stdio.h>
int a=6,b=5;
extern void add(int a,int b);
extern void sub(int a,int b);
extern void mul(int a,int b);
int main()
{
add(a,b);
sub(a,b);
mul(a,b);
}
