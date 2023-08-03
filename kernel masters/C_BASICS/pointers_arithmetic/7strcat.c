#include<stdio.h>
void *srrcat(char *a,char *b);
int main()
{
	char a[100],b[100];
	printf("str1");
	scanf("%s",a);
	printf("str2");
	scanf("%s",b);
	srrcat(a,b);
	printf("%s",a);
}

void *srrcat(char *a,char *b)
{
	char *r=b;
	while(*a)
	{
		*a++;
	}

	while(*b)
	{
		*a=*b;
		*a++;
		*b++;
	}
	return r;
}

