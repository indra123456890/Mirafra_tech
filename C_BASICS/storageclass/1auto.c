/*the auto storage class is the default storage class for local variables defined within a function or a block. The auto keyword is rarely used explicitly because local variables are automatically considered auto by default if no other storage class is specified.*/




/*#include<stdio.h>
int main()
{
auto int j=1;
{
auto int j=2;
{
auto int j=3;
printf("%d",j);
}
printf("%d",j);
}
printf("%d",j);
}*/



#include<stdio.h>
void myauto(void)
{
auto int a=10;
printf("%d",a);
}
int main()
{
myauto();
}


