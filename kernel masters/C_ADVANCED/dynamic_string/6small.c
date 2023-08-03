/*6) Write a program to read a set of strings from a user and print which string is the smallest of all ( in string comparison, smallest string means that should come the first in dictionary sorting order). Create the strings dynamically.*/ 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int  mystrcmp(char *s1,char *s2);
int main()
{
	int i=0,n,m,x;
	printf("enter string size\n");
	scanf("%d",&n);
	char *s1=(char *)malloc(n*sizeof(char));
	printf("enter the string\n");
	scanf("%s",s1);
	printf("enter string size\n");
	scanf("%d",&m);


	char *s2=(char *)malloc(m*sizeof(char));
	while(i<m)
	{
		printf("enter string 2\n");
		scanf("%s",s2);
		x=mystrcmp(s1,s2);
		if(x==2)
		{
			s1[0]=0;
			strcat(s1,s2);
		}
		i++;
	}
	printf("the smallest string is %s",s1);
}

int mystrcmp(char *s1,char *s2)
{
	int i,j;
	for(i=0,j=0;s1[i]!='\0';i++,j++);
	{
		if(s1[i]<s2[j])

			return 1;

		else if(s1[j]==s2[j]);


		else

			return 2;

	}
	return 1;
}

