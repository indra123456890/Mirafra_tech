#include<stdio.h>
int main()
{
int a;
printf("enter the numbers");
scanf("%d",&a);
a>0?printf( "%d is positive",a):a==0?printf( "the %d is zero",a):printf("%d the number is negative",a);
return 0;
}

