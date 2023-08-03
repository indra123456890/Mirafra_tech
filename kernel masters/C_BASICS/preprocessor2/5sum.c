 /*5)define a macro that generates a function that returns the sum of array elements,
   for different data typed arrays.*/
#include<stdio.h>
#define gensum(dt,arrsum) dt arrsum(dt a[],dt n)\
{\
				int i,sum=0;\
				for(i=0;i<5;i++)\
				{\
				sum=sum+a[i];\
}\
return sum;\
}\



			
gensum(int,arrsumi);
gensum(float,arrsumf);
gensum(double,arrsumd);



int main()
{
int a[5]={1,2,3,4,5},s;
float b[5]={1.0,2.0,3.0,4.0,5.0},t;
double d[5]={12.10,13.10,14.10,15.10,16.10},u;
s=arrsumi(a,5);
printf("%d\n",s);
t=arrsumf(b,5);
printf("%f\n",t);
u=arrsumd(d,5);
printf("%lf\n",u);
}

