//4Create a new file using contents of two files.(append one file content to another, and write to a third file).

#include<stdio.h>
#include<stdlib.h>

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
	FILE *fp1=NULL;
	fp1=fopen("xyz.txt","a+");
	if(fp1==NULL)
	{
		printf("open fail\n");
		exit;
	}
	FILE *fp2=NULL;
	fp2=fopen("third.txt","a+");
	if(fp2==NULL)
	{
		printf("open fail\n");
		exit;
	}

	while(!feof(fp))
	{
		char c=getc(fp);
		putc(c,fp1);
	}
	rewind(fp1);
	while(!feof(fp1))
	{
		char d=getc(fp1);
		putc(d,fp2);
	}
	fclose(fp);
	fclose(fp1);
	fclose(fp2);

}

