/*3) Write a string concatenation function that calculates the source string length, accordingly adjusts the size of destination string before concatenating the strings, to avoid size issues. For this the destination must be allocated dynamically in calling function.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void *fun(char *s,char *d);
int main()
{
	int n,m;
	printf("enter the source string size\n");
	scanf("%d",&n);
	char *s=(char *)malloc(n*sizeof(char));
	printf("enter the source string\n");
	scanf("%s",s);
	printf("enter destination string size\n");
	scanf("%d",&m);
	char *d=(char *)malloc(m*sizeof(char));
	printf("enter destination string\n");
	scanf("%s",d);
	fun(s,d);
}

void *fun(char *s,char *d)
{
	int i=0;
	int p=strlen(s);
	int q=strlen(d);
	int r=p+q+1;
	d=realloc(d,r*sizeof(char));
	for(i=0;s[i]!='\0';i++,q++)
	{
		d[q]=s[i];
	}
	printf("%s",d);
}


