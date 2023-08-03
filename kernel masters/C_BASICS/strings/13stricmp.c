#include<stdio.h>
int stricmp(char a[],char b[])
{
	int i,x;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
		if(b[i]>=65&&b[i]<=90)
		{
			b[i]=b[i]+32;
		}
		if(a[i]>b[i])
		{
			return 1;
		}
		else
			if(a[i]<b[i])
			{
				return -1;
			}
			else
				if(a[i]==b[i])
				{
					x=0;
				}
	}
	return x;
}

int main()
{
	char a[50],b[50];
	int c;
	fputs("stringicmpare.\n",stdout);
	fputs("str1:",stdout);
	fgets(a,50,stdin);
	fputs("str2:",stdout);
	fgets(b,50,stdin);
	c=stricmp(a,b);
	switch(c)
	{
		case 1:
			fputs(" 1: str1 greater than str2\n",stdout);
			break;
		case -1:
			fputs(" -1: str1 smaller than str2\n",stdout);
			break;
		case 0:
			fputs(" 0: str1 str2 are same.\n",stdout);
			break;
	}
}

