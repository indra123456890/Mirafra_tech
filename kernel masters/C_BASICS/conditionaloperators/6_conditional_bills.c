#include<stdio.h>
   int main()
   {
          float n,a;
          printf("enter number of calls:");
          scanf("%f",&n);
          a=n-100;
          n<=100?printf("bill is 250 rs\n"):printf("bill is %f\n",250+(a*1.25));
          return 0;
  }
