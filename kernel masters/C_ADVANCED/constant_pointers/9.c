/*) "Complete the below program :
const int x = 10;
const int y = 10;
const int * const ptr = &x;
int **pptr = &ptr;
modify the value of x,y , and ptr (to point to y). You can only create one extra pointer variable."
*/
#include<stdio.h>
int main()
{
const int x = 10;
const int y = 10;
const int * const ptr = &x;
int **pptr = &ptr;
**pptr=25;
*pptr=&y;
**pptr=66;
printf("%d\t%d\t\n",x,y);
}

