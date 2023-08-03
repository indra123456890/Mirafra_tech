
#include<stdio.h>
char Alphabet(char c)
{
	char x;
	if(c>=65&&c<=90)
		x=c+32;
	else if(c>=97&&c<=122)
		x=c-32;
	return x;
}
int main()
{
	char c,x;
	printf("enter the character:\n");
	scanf("%c",&c);
	if(c>=65&&c<=90||c>=97&&c<=122)
	{
		x=Alphabet(c);
		printf("%c\n",x);
	}
	else
		printf("It is not a Alphabet\n");
}
