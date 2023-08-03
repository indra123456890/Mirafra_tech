#include<stdio.h>
int power(int n,int p)
{
if(p!=0)
return(n*power(n,p-1));
else
return 1;
} 
int main()
{
int n,p,m;
printf("enter a number");
scanf("%d",&n);
printf("enter power");
scanf("%d",&p);
m=power(n,p);
printf("%d\n",m);
}
