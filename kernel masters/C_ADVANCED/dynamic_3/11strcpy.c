#include<stdio.h>
//#include<string.h>
char *mystrcpy(char ptr[],char str[]);
int main()
{
	char *ptr1="kernel";
	char *ptr2="masters";
	char str1[20];
	char str2[20]="HELLO";

	printf("string variable as destination String constant as source result = %s\n",mystrcpy(str1,ptr1));
	printf("string constant as destination String variable as source result = %s\n",mystrcpy(ptr1,str1));
	printf("string variable as destination String variable as source result = %s\n",mystrcpy(str1,str2));
	printf("string constant as destination String constant as source result = %s\n",mystrcpy(ptr1,ptr2));
}

char *mystrcpy(char ptr[],char str[])
{
	int i;
	for(i=0;str[i]!=0;i++)
		ptr[i]=str[i];
	ptr[i]='\0';
	return ptr;
}


