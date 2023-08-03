#include<stdio.h>
int main()
{
char ch;
printf("enter any character:");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
printf("it is alphabet\n");
switch(ch)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("it is a vowel\n");
break;
default:
printf("it is a consonant\n");
break;
}
}
else
{
printf("it is not a vowel\n");
}
}
