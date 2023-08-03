#include<stdio.h>
int strcmp(char s1[],char s2[])
{
	int i,x;
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
	{
		if(s1[i]>s2[i])
		{
			return 1;
		}
		if(s1[i]<s2[i])
		{
			return -1;
		}
		else if(s1[i]==s2[i])
		{
			x=0;
		}
	}
	return x;
}

int main()
{
	int i;
	char s1[100],s2[100];
	printf("enter the string 1\n");
	fgets(s1,100,stdin);
	printf("enter the string 2\n");
//	fputs(enter the string 1);
	fgets(s2,100,stdin);
//	fputs(s2,stdout);
	i=strcmp(s1,s2);
	if(i==1)
	{
		printf("\n%s is greater than %s",s1,s2);
	}
	else if(i==-1)
	{
		printf("\n%s is greater than %s",s2,s1);
	}
	else
	{
		printf("\nboth are equal");
	}
}

