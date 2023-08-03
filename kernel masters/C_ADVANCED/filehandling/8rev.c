#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int length,i;
	FILE *fptr;
	char str[100];
	printf("enter a string\n");//get a string from user
	fgets(str,100,stdin);
	length=strlen(str);
	if(str[length]=='\n')//remove newline char from end of string
	{
		str[length]='\0';
	}
	fptr=fopen("err.txt","w");//open file for writing
	if(fptr==NULL)
	{
		printf("error open fail");
	}
	fprintf(fptr,"%s",str);//write string to file
	fclose(fptr);//close file
	fptr=fopen("err.txt","r");//open file for reading
	{
		if(fptr==NULL)
		{
			printf("error open fai");
		}
		fgets(str,strlen(str),fptr);//read the string from file
		fclose(fptr);//close file
	}
	for(i=strlen(str);i>=0;i--)//print string in reverse
	{
		printf("%c",str[i]);
	}
	printf("\n");
}

