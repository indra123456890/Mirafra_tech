/*7) read a set of numbers from the user, and convert each integer to string using itoa function that you have written yesterday, and print the numeric string in calling function in the same loop.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void function(int n)
{
	int r,i,j,c;
	char *s=(char *)malloc(10*sizeof(char));
	while(n)
	{
		r=n%10;
		s[i++]=r+48;
		n=n/10;
	}
	printf("reverse %s",s);
	for(i=0;s[i]!='\0';i++)
		i=i-1;
	for(j=0;j<i;j++,i--)
	{
		c=s[j];
		s[j]=s[i];
		s[i]=c;
	}
	printf("after i to a %s",s);
}


int main()
{
	int n,s;
	printf("enter no of strings");
	scanf("%d",&n);
	printf("enter the string");
	while(n)
	{
		scanf("%d",&s);
		function(s);
	}
}

