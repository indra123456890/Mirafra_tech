
//add 2nos using cbr
#include<stdio.h>
int addd(int *p,int *p2)
{
 int s;
s=(*p)+(*p2);
return s;
}
int main()
{
int a=10,b=20,k;
k=addd(&a,&b);
printf("%d",k);
}
