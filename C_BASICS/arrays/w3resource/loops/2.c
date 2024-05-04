/* Write a C program to display a pattern like a right angle triangle with a number.

The pattern like :

1
12
123
1234*/

#include<stdio.h>
int main()
{
int i,j,r=4;
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
}
