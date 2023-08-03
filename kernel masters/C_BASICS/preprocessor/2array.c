/*2 Write down a macro to find the biggest of two numbers. Using this macro , implement array sorting*/


#include<stdio.h>
#define SORT(a,n) int j,c;\
		 for(i=0;i<n;i++)\
		 {\
                for(j=i+1;j<n;j++)\
		{\
		if(a[i]>a[j])\
		{\
		c=a[i];\
		a[j]=a[i];\
		a[i]=c;\
		}\
	}\
}\
for(i=0;i<n;i++)\
{\
printf("%d",a[i]);\
}\
printf("\n");\

		
int main()
{
int i,n;
printf("enter array size");
scanf("%d",&n);
int a[n];
printf("enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
SORT(a,n);
}
