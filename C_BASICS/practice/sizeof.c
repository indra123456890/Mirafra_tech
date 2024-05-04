#include<stdio.h>
int main()
{
int c;
int a;
char *ptr,*ptr1;
ptr=&a;
ptr1=&a+1;
c=ptr1-ptr;
printf("%d",c);
}
