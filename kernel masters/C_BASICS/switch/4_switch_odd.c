#include<stdio.h>
int main()
{
int c;
printf("enter the number\n");
scanf("%d",&c);
//if(!(c>='a'&&c<='z'||c>'A'&&c<='Z'&&c>='~'&&c<='['||c>=' '&&c<='{'))
switch(c%2)
{
case 0:printf("%d is an even\n",c);
       break;
case 1:
printf("%d is an odd\n",c);
break;
default:
printf("it is not a number\n");
}
//else
//printf("it is not a number");
return 0;
}


