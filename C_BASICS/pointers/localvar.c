
//taking another local var in function is not recommended as stack gets crshed after returning and scope is local to the function itself it results undefined behaviour instead we use function parameters.
/*#include<stdio.h>
int adds(int a,int b)
{
int z=a+b;
return z;
}
int main()
{
int a=10,b=20;
int c;
c=adds(a,b);
printf("%d",c);
}*/

//use this method

/*#include<stdio.h>
int add(int s,int u)
{
return s+u;
}
int main()
{
int a=10,b=20;
int r;
r=add(a,b);
printf("%d",r);
}*/

//local static
//scope within block life time throughout
#include<stdio.h>
void ggg()
{
static int y=10;
y++;
printf("%d",y);
}
int main()
{
ggg();
ggg();
}
