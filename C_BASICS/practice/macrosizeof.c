#include<stdio.h>
#define MACRO(y) (char*)(&y+1)-(char*)(&y)

//#define macro((y) (int*)(&((double *)0)[1])
int main()
{
char y;
printf("%d", MACRO(y));
}

