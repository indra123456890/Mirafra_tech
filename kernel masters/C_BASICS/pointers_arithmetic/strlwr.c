#include<stdio.h>
char * stlwr(char *d)
{
	char *p=d;
	for(*d;*d!=0;*d++)
	{
		if(*d>=65&&*d<=90)
		{
			*d=*d+32;
		}
	}
	return p;

}

int main()
{
	char d[50];

	printf("enter str in upper:");
	scanf("%s",d);
	stlwr(d);
	printf("%s\n",d);
}


