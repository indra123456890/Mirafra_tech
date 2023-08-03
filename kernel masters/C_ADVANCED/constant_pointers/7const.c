
/*7)  "Complete the below program :
  int x; int y;
  int * const ptr = &x;
  we cannot modify ptr to point to a different address using ptr directly. Do it indirectly."
 */
#include<stdio.h>
int main()
{
	int x=10;
	int y=20;
	int *const p=&x;
	int **p1=&p;
	*p1=&y;
	printf("%d\n",*p);
}

