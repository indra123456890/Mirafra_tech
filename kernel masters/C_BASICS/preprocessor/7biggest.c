/*7 Write a macro to print the biggest of three values. Try to call it and print the result for different data types, integer, float, double and character.*/

#include<stdio.h>
#define BIGGEST(a,b,c) ((a)>(b))?((a)>(c))?(a):(c):((b)>(c)?(b):(c))

		int main()
{
		

		int d=4,e=7,f=5;
		printf("%d\n",BIGGEST(d,e,f));

		float i=2.4,j=5.6,k=3.10;
		printf("%f\n",BIGGEST(i,j,k));

		double p=3.54000,q=7.00000,r=8.345000;
		printf("%lf\n",BIGGEST(p,q,r));

		char a='x',b='y',c='z';
		printf("%c\n",BIGGEST(a,b,c));
}


