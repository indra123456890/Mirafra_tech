/*3) Implement your own string concatenation function.

  try calling the string copy function by sending the below as input:
  1) string constant as destination and string variable as source
  2) string variable as destination and string constant as source
  3) string variable as destination and string variable as source
  4) string constant as destination and string constant as source*/

#include<stdio.h>
#include<stdlib.h>
void mystrcat(char d[],char s[]);
int main()
{
	char *s="kernel";
	char s1[100]="masters";

	/*mystrcat(s,s1);
	printf("1-%s",s);*/
	
	mystrcat(s1,s);
	printf("2-%s",s1);

	mystrcat(s1,s1);
	printf("3-%s",s1);

/*	mystrcat(s,s);
	printf("4-%s",s);*/
}


void mystrcat(char d[],char s[])
{
	int i,j,k;
	for(i=0;d[i]!=0;i++);
	k=i;
	for(j=0;s[j]!=0;j++,k++)
	{
		d[k]=s[j];
	}
	d[k]=0;
}

