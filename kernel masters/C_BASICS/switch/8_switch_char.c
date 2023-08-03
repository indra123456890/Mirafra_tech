#include<stdio.h>
int main()
{
char a;
printf("Enter the Character:\n");
scanf("%c",&a);
switch(a>=65&&a<=90)
{
case 1:
printf("%c\n",a+32);
break;
case 0:
switch(a>=97&&a<=122)
{
case 1:
printf("%c\n",a-32);
break;
case 0:
printf("Please Check And Enter Alphabet\n");
}
}
return 0;
}

