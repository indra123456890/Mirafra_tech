#include<stdio.h>
int sstrlen(char s[])
{
	int i=0;
	while(*s!='\0')
	{
		*s++;
		i++;
	}
	return i;
}



int main()
{
	int i;
	char s[10];
	printf("enter the string");
	scanf("%s",s);
	i=sstrlen(s);
	printf("%d",i);
}
