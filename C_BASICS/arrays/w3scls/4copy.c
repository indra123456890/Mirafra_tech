/*4. Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12*/


#include<stdio.h>
int main()
{
int n,i,j;
printf("enter size");
scanf("%d",&n);
int a[n];
int b[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("elements in 1st array are %d\n",a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
}
for(i=0;i<n;i++)
{
printf("elements in second array are:%d\n",b[i]);
}
}
