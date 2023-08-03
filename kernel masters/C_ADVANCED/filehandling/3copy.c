//3	Read the contents of a file and copy to another file.


#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp=NULL;
	int a,b,x;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("open fail\n");
		exit;
	}
	FILE *fp1=NULL;
	fp1=fopen("xyz.txt","w");
	if(fp==NULL)
	{
		printf("open fail\n");
		exit;
	}

	while(!feof(fp))
	{
		char c=getc(fp);
		putc(c,fp1);
	}

}

