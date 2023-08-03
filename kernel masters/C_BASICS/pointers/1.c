#include<stdio.h>
int main()
{
int x=10;
int *ptri=&x;
printf("Address of variable:%p\n",&x);
printf("value of variable:%d\n",x);
printf("size of variable:%lu\n",sizeof(x));
printf("Address of pointer variable:%p\n",ptri);
printf("value of pointer variable: %d\n",*ptri);
printf("size of pointer variable:%lu\n",sizeof(*ptri));
}
