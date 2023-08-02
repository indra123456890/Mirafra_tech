#include<stdio.h>
void str0word(char s[]);
void strword1(char s[],int ,int);
void strword2(char s[],int,int);
int main()
{
	char s[100]="i am in india";
	int a[100],b=0;
	int i,j,k=0;
	char c;
str0word(s);
}

void str0word(char s[])
{
int i,j;
char c;
	for(i=0;s[i]!='\0';i++)
	{
		j=i;
	}
	for(i=0;i<=j;i++,j--)
	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}
strword1(s,i,j);
}
//	for(i=0,j=0;i<=j;i++,j++)
//	{

void strword1(char s[],int i,int j)
{
int a[100];
		for(i=0;s[i];i++)
		{
			if(s[i]==' '||s[i]=='\0')
			{
				a[j]=i;
			}
		}
	strword2(s,i,j-1);
//	j=i+1;
}
void strword2(char s[],int i,int j)
{
	char c;
	for(i;i<j;i++,j--)
	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}
strword1(s,i,j);
	printf("%s",s);
}


