#include<stdio.h>
int strcrev(char s[]);
int strwrev(char s[]);
int main()
{
	char s[100];
	printf("enter string\n");
	scanf("%[^\n]s",s);
	strwrev(s);
}

int strwrev(char s[])
{
	int i=0,j=0,temp,n;
	for(i=0;s[i]!=0;i++);
	n=i;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;

	}

	strcrev(s);
	printf("%s\n",s);
}


int strcrev(char s[])
{
	int i=0,j=0,temp,n;
	for(i=0;s[i];i++)
	{
		for(i;s[i]!=' ' && s[i];i++);
		n=i-1;
		for(j;j<n;n--,j++)
		{
			temp=s[j];
			s[j]=s[n];
			s[n]=temp;
		}
		j=i+1;
	}
}

