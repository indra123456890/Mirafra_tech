#include<stdio.h>
int main()
{
char c;
printf("enter character:\n");
scanf("%c",&c);
if (c>='A'&&c<='Z')
{
printf("%c",c=c+32);
}
else if(c>=97&&c<=122)
{
printf("%c\n",c=c-32);
}
else
{
printf("%c not alphabet\n",c);
}
}
