/*2implement your own string comparison function that compares two strings and returns -ve / 0 / +ve  number depending first string is smaller / equal or bigger to the second string.

  try to call this function using two string constants as inputs, and see what is the output.

  copy the string constants to a dynamically allocated string using above string copy function, and then call string comparison function again.*/


#include<stdio.h>
#include<string.h>
int strcmp1(char name1[],char name2[]);
int main()
{
	char *name1="kelvin";
	char *name2="keln";
	int x;
	x=strcmp(name1,name2);
	/*printf("enter the first string:");
	   scanf("%s",str1);
	   printf("enter the second string:");
	   scanf("%s",str2); */
	if(x==0)
		printf("two strings are equal\n");
	else if(x<0)
		printf("str1<str2\n");
	else if(x>0)
		printf("str1>str2\n");
	return 0;
}

int strcmp1(char name1[],char name2[])
{
	int i;
	for(i=0;name1[i]==name2[i];i++)
	{
		if(name1[i]==0)
			return 0;
	}
	return(name1[i]-name2[i]);
}

