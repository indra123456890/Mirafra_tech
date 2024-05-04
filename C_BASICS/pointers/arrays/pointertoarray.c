//we can declare a pointer that cn point to an entire array nin memory
//we4 can assign an array to pointer to array.
//int a[5]={1,2,3,4,5};
//int (*ptrtoarr)[5]=&a;
//can be modified
#include<stdio.h>
int main()
{
int a[3]={1,2,3};
int (*ptrtoarr)[3]=&a;
(*ptrtoarr)[1]=4;
printf("%d",(*ptrtoarr)[1]);
}
