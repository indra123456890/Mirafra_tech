//how can we change pointer value through function call
//ANS:using dereference

#include<stdio.h>
void changeval(int *p)
{
*p=42;
}
int main()
{
int x=10;
int *p;
p=&x;
changeval(p);
printf("after fun call %d",*p);
return 0;
}
