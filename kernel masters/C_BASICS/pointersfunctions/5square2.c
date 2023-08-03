/*"Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main.*/

#include<stdio.h>
int *squ();
int main()
{
int arr[5]={1,2,3,4,5};
int i;
for(i=1;i<=5;i++)
{
int *p=squ();
*p=arr[i];
}
}

int *squ()
{
static int p=1;
p=p*p;
if(p>0)
{
printf("%d",p);
return &p;
}
}
