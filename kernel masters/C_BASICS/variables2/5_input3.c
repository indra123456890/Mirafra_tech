#include<stdio.h>
int main()
{
char a,b,c;
int x,y,z,result;
printf("enter a character\n");
scanf(" %c",&a);
printf("enter a character\n");
scanf(" %c",&b);
printf("enter a character\n");
scanf(" %c",&c);
x=a-'0';
y=b-'0';
z=c-'0';
result=x*100+y*10+z*1;
printf("the integer result is:%d\n",result);
return 0;
}
