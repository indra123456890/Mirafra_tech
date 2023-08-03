#include <stdio.h>
int main() {
   int i, j=0;
   int n = 6;
   for ( i = 1; i <= n; ) {
      if( j < i ) {
         printf("*");
         j++;
      }
      if(j == i) {
         printf("\n");
         j = 0;
         i++;
      }
   }
   return 0;
}
