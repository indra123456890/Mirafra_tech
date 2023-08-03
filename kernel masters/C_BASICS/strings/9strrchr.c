#include<stdio.h>
int stlchr(char s[],char c)
{
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
	}
	for(i;s[i]>=0;i--)
	{
		if(c==s[i])
			return i;
	}
	return -1;
}

int main()
{
	int k;
	char s[100],c;
	printf("str:");
	scanf("%s",s);
	printf("char:");
	scanf(" %c",&c);
	k=stlchr(s,c);
	printf("last ocurrence%d\n",k);
}

