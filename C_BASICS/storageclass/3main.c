/*the extern storage class is used to declare a variable or function that is defined in another file or translation unit. It allows you to use a variable or function that is defined in a different file, making it accessible throughout the entire program.

Here's an example of how you can use the extern storage class:*/



#include<stdio.h>
extern int a;
extern void fun();
int main()
{
printf("%d",a);
fun();
}



/*In this example, main.c uses the extern storage class to access the variable sharedVar and the function sharedFunction() defined in the shared.c file, allowing them to be shared across multiple source files in a C program.*/
