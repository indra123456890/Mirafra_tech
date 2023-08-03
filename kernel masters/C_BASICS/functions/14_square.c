/*14)Write a function to take a number and return its square, without using * operator.*/


#include<stdio.h>
int square(int);
int main()
 {
   int a,R,A;
   printf("enter the number:");
   scanf("%d",&a);
    R=square(a);
   printf("%d",R);
  }
  

int square(int a)
  {
  int i;
  int A=0;
  for(i=1;i<=a;i++)
  {
  A=a+A;
  }
  return A;
  }


