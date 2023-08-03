/*1)Write a function that takes principle, rate of interest and time in months as input arguments, and returns the total amount to be repayed, after calculation of simple interest.*/


#include<stdio.h>
float simpleinterest(int p,int n,float r)
{
float si,m;
m=n/12.0;
si=p*m*r/100;
return si;
}

int main()
{
int p,n;
float r,si;
scanf("%d %d %f",&p,&n,&r);
si =simpleinterest(p,n,r);
printf("%f\n",si);
return 0;
}
