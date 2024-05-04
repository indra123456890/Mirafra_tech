#include<stdio.h>
#include<string.h>
void strcpy(char s[],char d[])
{
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		d[i]=s[i];
	}
	d[i]='\0';
}
int main()
{
	int n=2;
	char s[10]="indra";
	char d[10];
	strcpy(d,s);
	printf("%s",s);
}

