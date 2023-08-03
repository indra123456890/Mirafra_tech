/*3)define a macro to generate swapping function for int, float , double and character datatypes, as a generic function using macros.*/

#include<stdio.h>
#define genswap(dt,fn) dt fn(dt *a,dt *b)\
				{\
				int temp;\
    				temp=*a;\
				*a=*b;\
				*b=temp;\
				}\

genswap(int,swapi);
genswap(float,swapf);
genswap(double,swapd);
genswap(char,swapc);

int main()
{
int a=5,b=6;
float c=5.0,d=7.0;
double e=24.4785,f=56.789;
char g='s',h='t';

swapi(&a,&b);
printf("%d\n %d\n",a,b);
swapf(&c,&d);
printf("%f\n %f\n",c,d);
swapd(&e,&f);
printf("%lf\n %lf\n",e,f);
swapc(&g,&h);
printf("%c\n %c\n",g,h);
}

