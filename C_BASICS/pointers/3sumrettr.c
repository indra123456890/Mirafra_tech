/*#include<stdio.h>
int* add(int a,int b)
{
int z;
z=a+b;
int *s;
s=&z;
return s;
}
int main()
{
int a=10,b=20;
int *p;
p=add(a,b);
printf("%d",*p);
}*/

//wrong
#include<stdio.h>
int * sum(int a,int b)
{
int *s;
s=a+b;
return s;
}
int main()
{
int a=10,b=20;
int *p;
p=sum(a,b);
printf("%d",p);
}

/*#include<stdio.h>
#include<stdlib.h>
int* fun(int a,int b)
{
int *c=(int *)malloc(1*sizeof(int));
*c=a+b;
return c;
}
int main()
{
int *p1;
int a=10,b=20;
p1=fun(a,b);
printf("%d",*p1);
free(p1);
}*/

