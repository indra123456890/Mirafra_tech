/*2) Implement your own realloc function using malloc and free using below steps: 
- Allocate memory for new size using malloc
- copy data from old address to new address
- release the old address
- return the new address*/

#include<stdio.h>
#include<stdlib.h>
char *myrealloc(char *str,int m);
int main()
{
	int n,m;
	char *str=(char *)malloc(n*sizeof(char));
	printf("enter the string");
	scanf("%s",str);
	printf("enter the size");
	scanf("%d",&m);
	char *c=myrealloc(str,m);
	printf("%p",c);
}

char *myrealloc(char *str,int m)
{
	int i;
	char *c=(char *)malloc(m*sizeof(int));
	for(i=0;str[i]!='\0';i++)
	{
		c[i]=str[i];
	}
	free(str);
	return c;
}

