//in pointer to constant address can be changed but value cannot be changed

#include<stdio.h>
int main()
{
int a=1;
int b=2;
int const *ptr=&a;
ptr=&b;
printf("%p",ptr);
}
