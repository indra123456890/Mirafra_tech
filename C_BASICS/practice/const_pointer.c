/*in constant pointer here address cannot be change but value can be changed*/


#include<stdio.h>
int main()
{
int a=1;
int b=2;
int *const ptr=&a;
 ptr=&b;
*ptr=10;
//ptr=&a;
//ptr=&b;
printf("address of ptr is :%p",ptr);
printf("value of ptr is :%d",*ptr);
}
