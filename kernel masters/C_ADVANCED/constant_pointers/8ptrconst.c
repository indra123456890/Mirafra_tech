/*8)  "Complete the below program :
	const int x;
	const int * ptr;
	ptr = &x;
	x value cannot be changed using x or *ptr. Do it indirectly."
*/
#include<stdio.h>
int main()
{
	int x=10;
	int y=20;
const int *p=&x;
	int **p1=&p;
	**p1=y;
	printf("%d\n",*p);
	printf("%d\n",x);
}


