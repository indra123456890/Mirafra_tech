/*6.Declare a two dimensional array of characters, read names from the user and print them back with each individual character format (%c) in a loop.*/

#include<stdio.h>

int main()
{
	int i,j,n;
	printf("enter name\n");
	scanf("%d",&n);

	char arr[n][20];


	printf("enter name\n");

	for(i=0;i<n;i++)
	{
		scanf(" %[^\n]s",arr[i]);
	}

	printf("after coverting into char\n");

	for(i=0;i<n;i++)
	{
		for(j=0;arr[i][j]!='\0';j++)
		{
			printf("%c",arr[i][j]);
		}
printf("\n");	
	}
}


