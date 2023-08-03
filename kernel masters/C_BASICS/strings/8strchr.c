#include<stdio.h>
int stchr(char s[],char c)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(c==s[i])
		return i;
	}
	return -1;
}

int main()
{
	int k;
	char s[100];
	char c;
	printf("enter string:");
	scanf("%s",s);
	printf("enter char:");
	scanf(" %c",&c);
	k=stchr(s,c);
	printf("first ocurrence:%d\n",k);
}

