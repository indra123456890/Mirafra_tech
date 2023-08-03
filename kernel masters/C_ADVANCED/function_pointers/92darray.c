/*9) Create a two dimentional array (array of strings) using a double pointer and sort the strings alphabetically. Here number of strings, and each string size, both are decided during runtime.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sorting(char **p1,char **p2)
{
	char *temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
//int mystrcmp(char *str1,char *str2)
int mystrcmp(char str1[],char str2[])
{
	int i;
	for(i=0;str1[i]!=0&&str2[i]!=0;i++)
	{
		if(str1[i]>str2[i])
			return str1[i]-str2[i];
		if(str1[i]<str2[i])
			return str1[i]-str2[i];
	}
	return str1[i]-str2[i];
}
int main()
{
	char **p=NULL;
	int r,c,i,j;
	printf("enter the size of array pointers\n");
	scanf("%d",&r);
	p=(char **)malloc(r*sizeof(char *));
	for(i=0;i<r;i++)
	{
		char str[100];
		printf("enter the string\n");
		scanf("%99s",str);
		c=strlen(str);
		p[i]=(char *)malloc((c+1)*sizeof(char));
		strcpy(p[i],str);
	}
	for(i=0;i<r-1;i++)
	{
		for(j=0;j<r-i-1;j++)
		{
			if(mystrcmp(p[j],p[j+1])>0)
				sorting(&p[j],&p[j+1]);
		}
	}
	printf("after sorting the output is\n");
	for(i=0;i<r;i++)
		printf("%s\n",p[i]);
	for(i=0;i<r;i++)
		free(p[i]);
	free(p);
}

