/*4.read a set of words from the user and concatenate all of them to make a sentence and print it back using the concatenation function above with spaces as delimiters and fullstop as end of the sentence.

input: 
Kernel
Masters
is
India's
leading
training
institute.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *concat(char *s)
{
	int i,j=0,x=1;
	char *d=(char *)malloc(100*sizeof(char));
	while(x)
	{
		scanf("%s",s);
		s=realloc(s,strlen(s)*sizeof(char));
		for(i=0;s[i]!='\0';i++,j++)
		{
			if(s[i]=='.')
			{
d[j]='.';
				x=0;
			}
			else
			{
				d[j]=s[i];
			}
		}
		d[j]=' ';
		j++;
	}
	return d;
}

int main()
{
	char *s=(char*)malloc(100*sizeof(char));
	printf("enter the string\n");
	s=concat(s);
	printf("%s",s);
}
