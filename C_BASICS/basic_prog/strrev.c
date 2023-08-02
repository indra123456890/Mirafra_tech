#include<stdio.h>
/*void strrev(char s[])
{
	int i,j;
	char c;
	for(i=0;s[i]!='\0';i++)
	{
		j=i;
	}
	for(i=0;i<=j;i++,j--)
	{
		c=s[j];
                s[j]=s[i];
		s[i]=c;
	}
	printf("%s\n",s);
}*/


void strrev(char s[])
{
int i=0,len=0,j;
for(i=0;s[i]!='\0';i++)
{
len++;
}
for(i=len-1;i>=0;i--)
{
printf("%c",s[i]);
}
}
int main()
{
	char s[100];
	printf("str:");
	scanf("%s",s);
	strrev(s);
}


