/*15. WAP Swap any two numbers using bitwise operators. How does it work?*/

#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("before swap %d%d\n",a,b);
a=a^b;
b=b^a;
a=a^b;
printf("after swap %d%d\n",a,b);
return 0;
}
