#include<stdio.h>
#define MAX(a,b)((a)>(b)?(a):(b))
#define BIG(a,b,c)MAX(MAX(a,b),c)
int main()
{
int n1=2,n2=3,n3=6;
int biggest;
biggest=BIG(n1,n2,n3);
printf("biggest of 3 is %d",biggest);
}
