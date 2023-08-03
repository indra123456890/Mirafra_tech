#include<stdio.h>
int main()
{
int p,n;
float r,si,m;
printf("please enter pnr values:\n");
scanf("%d %d %f",&p,&n,&r);
m=n/12;
si=p*m*r/100;
printf("%f",si);
return 0;
} 
