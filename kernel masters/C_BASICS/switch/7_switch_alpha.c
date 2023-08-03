#include<stdio.h>
int main()
{
char a;
printf("Enter the character:\n");
scanf("%c",&a);
switch(a>=65&&a<=90||a>=97&&a<=122)
{
case 1:
printf("It is an alphabet\n");
break;
case 0:
printf("It is not alphabet\n");
}
return 0;
}
