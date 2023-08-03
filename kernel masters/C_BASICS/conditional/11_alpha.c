#include<stdio.h>
int main()
{
char c;
printf("Enter a character: ");
scanf("%c", &c);
printf("%d\n",c);
if (c>=65)
{
if(c<=90)
{
printf("%c is upper case alphabet", c);
}
else if(c>=97)
{
if(c<=122)
printf("%c is lower case alphabet",c);
}
}
else
{
printf("%c is not an alphabet",c);
}
return 0;
}
