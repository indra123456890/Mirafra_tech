//can we return a array from fuction to main

/* here statically created array int b[5] cannot directly return to main function coz statically array has local scope within function where it is declared once fun completes the memory associated with array is deallocated and attempting to return a pointer to array would result undefined behaviour

so if you ned to return array from func use to allocate memory dynamically using malloc*/

//so at any cost if u use staticall array we cn pass array (old array from main to fun as parametre and can change the array within function and changes gets reflected in main that prog is 2array.
#include<stdio.h>
#include<stdlib.h>
int* createarray(int n1)
{
//int b[5];
int *b=(int *)malloc(1*sizeof(n1));
int i;
for(i=0;i<n1;i++)
{
b[i]=i*2;
}
return b;
}

int main()
{
int n=5;
int *p;
p=createarray(n);
for(int i=0;i<n;i++)
{
printf("%d",p[i]);
}
}
