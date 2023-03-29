/*#include<stdio.h>
void strrrcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
	printf("%s",d);
}
int main()
{
	char d[100];
	char s[100];
	printf("enter source string\n");
	scanf("%s",s);
	printf("enter destination string\n");
	scanf("%s",d);
	strrrcpy(d,s);
}*/




//using pointer

#include<stdio.h>
char *strrrrcpy(char *d,char *s)
{
//char *r=d;
while(*s)
{
*d=*s;
*d++;
*s++;
}
*d='\0';
//return r;

//printf("%s",d);
}
int main()
{
char s[100];
char d[100];
printf("enter source string");
scanf("%s",s);
printf("enter destination string");
scanf("%s",d);
strrrrcpy(d,s);
printf("%s",d);
}

