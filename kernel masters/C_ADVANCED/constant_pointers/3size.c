//3)  Write a macro to find size of a variable using pointers 
#include<stdio.h>
#define  S(n,d,x)     printf(#n"::"#d"\n",sizeof(x));  
int main()
{
	int a=9;
	float b=6;
	double c=9;
	char e=a;
	int *p=&a;
	S(integer,%lu,*p);
	float *B=&b;
	S(floats,%lu,*B);
	double *C=&c;
	S(doubles,%lu,*C);
	char *E=&e;
	S(character,%lu,*E);
}


