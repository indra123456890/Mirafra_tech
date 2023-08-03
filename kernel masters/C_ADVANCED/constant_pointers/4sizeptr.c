//4)  Write a macro to find size of a given data typeusing pointers 
#include<stdio.h>
#define  S(x) ((char*)(&x+1))-(((char*)(&x)))
int main()
{
	int *p;
	float *B;
	double *C;
	char *E;
	printf("%ld\n",S(p));
	printf("%ld\n",S(B));
	printf("%ld\n",S(C));
	printf("%ld\n",S(E));
return 0;
}


