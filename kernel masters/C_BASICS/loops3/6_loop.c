/*6)

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1*/


#include<stdio.h>
 int main()
   {
   int i,j,n=1;
   for(i=5;i>=n;i--)
   {
   for(j=5;j>=i;j--)
   {
   printf("%d ",j);
   }
   printf("\n");
   }
   }

