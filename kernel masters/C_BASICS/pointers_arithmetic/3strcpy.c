/*3) char * strcpy( char d[] , char s[]);*/
// returns destination base address

#include<stdio.h>
char * stcpy(char d[],char s[])
{
	char *r=d;
	while(*s)
	{
		*d=*s;
		d++;
		s++;
	}
	*d='\0';
	return r;
}

int main()
{
	char s[50],d[50];
	printf("str1:");
	scanf("%s",s);
	printf("str2:");
	scanf("%s",d);
	stcpy(d,s);
	printf("str2:%s\n",d);
}

