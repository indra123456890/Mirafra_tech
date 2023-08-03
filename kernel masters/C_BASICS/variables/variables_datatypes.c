#include<stdio.h>
int main()
{
int x;
float y;
double z;
unsigned int a;
short int b;
long int e;
unsigned short int g;
unsigned long int j;
signed char m;
unsigned char n;
long double p;
printf("Enter the values\n");
scanf("%d%f%lf%u%h%ld%hu%lu%c%c%Lf",&x,&y,&z,&a,&b,&e,&g,&j,&m,&n,&p);
printf("%d\n,%f\n,%lf\n,%u\n,%h\n,%ld\n,%hu\n,%lu\n,%c\n,%c\n,%Lf\n",x,y,z,a,b,e,g,j,m,n,p);
return 0;
}
