//2 Open the file  in append mode, and write new numbers to it, and print entire content of the file.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp=NULL;
	int a,b,x;
	fp=fopen("abc.txt","a+");
	if(fp==NULL)
	{
		printf("open fail\n");
		exit;
	}

	printf("enter the nos\n");
	scanf("%d",&a);
	putw(a,fp); //puting in file
	rewind(fp); //cursor point to starting
	a=getw(fp);
	while(!feof(fp))
	{
		printf("%d",a);
		a=getw(fp);
	}

	fclose(fp);
}
