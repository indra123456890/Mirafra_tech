/*3) Implement your own string concatenation function.

  try calling the string copy function by sending the below as input:
  1) string constant as destination and string variable as source
  2) string variable as destination and string constant as source
  3) string variable as destination and string variable as source
  4) string constant as destination and string constant as source*/

#include<stdio.h>
char *mystrcat(char name1[],char name2[]);
int main()
{
	char *ptr1="kernel";
	char *ptr2="masters";
	char str1[20]="World";
	char str2[20]="HELLO";

//	printf("string variable as destination String constant as source result = %s\n",mystrcat(str1,ptr1));
	printf("string constant as destination String variable as source result = %s\n",mystrcat(ptr1,str1));
	printf("string variable as destination String variable as source result = %s\n",mystrcat(str1,str2));
//	printf("string constant as destination String constant as source result = %s\n",mystrcat(ptr1,ptr2));
}

char  *mystrcat(char name1[],char name2[])
{
	int i=0;
	int j=0;
	for(;name2[i]!=0;i++);
	while(name1[j]!=0){
		name2[i]=name1[j];
		i++;
		j++;}
	return (name2);
}

