#include<stdio.h>
void strrev(char *s)
{
	if(*s==0)
	return;
	
		strrev(s+1);
		printf("%c",*(s+0));
	
}
int main()
{
	char s[50];
	printf("enter string");
	scanf("%s",s);
	strrev(s);
}
