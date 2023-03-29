/*#include<stdio.h>
int strrrlen(char s[])
{
int i;
while(s[i]!='\0')
{
i++;
}
return i;
}
int main()
{
int i;
char s[100]="indra";
i=strrrlen(s);
printf("%d",i);
}*/

//using pointer

#include<stdio.h>
int strrrrlen(char *s)
{
	int i=0;
	while(*s)
	{
		*s++;
		i++;
	}
	return i;
}
int main()
{
	int i;
	char s[100]="indra";
	i=strrrrlen(s);
	printf("%d",i);
}
