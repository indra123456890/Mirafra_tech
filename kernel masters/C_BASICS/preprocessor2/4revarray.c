/*4)define a macro to generate a generic function that takes prints an array in reverse order.
   Generate the functions for int, float, double data types.*/



#include<stdio.h>
#define genrev(dt,revarr) dt revarr(dt a[],dt n)\
{\
			int i,j,c;\
			for(i=0,j=n-1;j>i;i++,j--)\
			{\
			c=a[j];\
			a[j]=a[i];\
			a[i]=c;\
}\
return 0;\
}\

#define PRINT(a,d) for(i=0;i<5;i++)\
{\
printf(" "#d,a[i]);\
}\
printf("\n");\



genrev(int,revarri);
genrev(float,revarrf);
genrev(double,revarrd);
genrev(char,revarrc);

int main()
{
int a[5]={1,2,3,4,5},i;
float b[5]={2.0,3.0,4.0,5.0,6.0};
double d[5]={2.12,3.12,4.12,5.12,6.12};
char c[5]={'a','b','c','d','e'};

revarri(a,5);
PRINT(a,%d);
revarrf(b,5);
PRINT(b,%f);
revarrd(d,5);
PRINT(d,%lf);
revarrc(c,5);
PRINT(c,%c);
}
