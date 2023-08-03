/*7." Implement a macro to find the size of a variable in bytes ( implement your own sizeof operator).
- Size in bytes can be derived by converting the address of a variable into character address ,and then subtracting it from the next address (address + 1).
 - int x;
sizeof x will be : (char *)(&x + 1) - (char *)&x;
If we implement this as a function, we will have to implement different functions for different data types of the variables.
Implement this using macro, so that it can work for any data type of the variable. "*/

#include<stdio.h>
#define size(dt,a)      printf(#dt"= %lu size\n",(char *)(&a+1)-(char *)&a);\
		





int main()
{
int a=9;
float b=46.8798;
 double d=7645.8758765;
char c=2;
size(int,a);
size(float,b);
size(char,c);
size(double,d);

}

