#include<stdio.h>
/*void strtrim(char s[])
{
	int i,j,c=0;
	for(i=0;s[i]==32;i++)
	{
		c++;
	}
	for(i=0;s[c]!='\0';i++,c++)
	{
		s[i]=s[c];
	}
		s[i]=0;
	for(j=i-1;s[j]==32;j--)
	{
		
			s[j]='\0';
	}
	printf("%s",s);
}*/


void strtrim(char s[])
{
int i,j,c=0;
for(i=0;s[i]==32;i++)
{
c++;
}
for(i=c;s[i]!='\0';i++,c++)
{
s[i]=s[c];
}
s[i]='\0';
for(j=i-1;s[j]==32;j--)
{
s[j]='\0';
}
printf("%s",s);
}

int main()
{
	char s[100];
	printf("enter the string");
	scanf("%[^\n]s",s);
	strtrim(s);
}
