#include<stdio.h>
void strword(char s[],int,int);
int main()
{
	char s[100]="i am in  india";
	int i,j,k=0,l=0;
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


	printf("%s\n",s);
	for(i=l;s[i]!=0;i++)
	{
		if(s[i]==32)
		{
			strword(s,l,i-1);
			l=i+1;
		}
	}
	printf("%s",s);
}
void strword(char s[],int i,int j)
{
	char c;
	for(i;i<=j;i++,j--)
	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}
}

