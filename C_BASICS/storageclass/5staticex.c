#include<stdio.h>
extern void fun();
int main()
{
static int a=10;
int *p=&a;
fun();
}
