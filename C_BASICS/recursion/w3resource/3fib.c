/*3. Write a program in C to print the Fibonacci Series using recursion. >
Test Data :
Input number of terms for the Series (< 20) : 10
Expected Output:

 Input number of terms for the Series (< 20) : 10                                
 The Series are :                                                                
 1  1  2  3  5  8  13  21  34  55  */

#include<stdio.h>
int nfib(int n)
{
if(n==1||n==2)
return 1;
else
return nfib(n-1)+nfib(n-2);
}
int main()
{
int n,i;
printf("enter the pos");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d,",nfib(i));
}
}
