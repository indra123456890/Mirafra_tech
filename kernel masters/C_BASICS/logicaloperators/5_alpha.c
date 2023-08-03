#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
{
printf("entered char is  an alphabet");
}
else
{
printf("entered char is not alphabet");
}
}
