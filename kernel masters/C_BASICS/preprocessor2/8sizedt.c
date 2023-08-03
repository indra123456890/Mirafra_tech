/*8) Implement  a macro to find the size of a datatype when the
 datatype keyword is provided as macro parameter.*/

#include<stdio.h>
#define size(d,a) printf(#d"=%lu\n",sizeof(a));\

int main()
{
int i=5;
float f=32.45;
double d=2345.56788;
char c='h';

size(int,i);
size(float,f);
size(double,d);
size(char,c);
}

