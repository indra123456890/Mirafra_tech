#include<stdio.h>
int main()
{
int dv,ds,i=0,c=0;
printf("enter two numbers divisor and dividend");
scanf("%d %d",&ds,&dv);
c=dv;
while(c>=ds)
{ 
c=c-ds;
i++;
} 
printf("%d quotient",i);
printf("%d remainder",c);
return 0;
}
