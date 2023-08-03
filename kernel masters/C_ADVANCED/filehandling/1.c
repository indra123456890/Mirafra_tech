//1	keep reading numbers from user, and write those numbers to a file. Once user presses -1, stop reading, and print all the contents of the file. Open the file everytime with previous contents intact (append mode).



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
	while(1)
	{
		printf("enter the nos\n");
		scanf("%d",&a);
		putw(a,fp); //puting in file
		printf("break -1");
		scanf("%d",&x);
		if(x==-1)
			break;
	}
	rewind(fp); //cursor point to starting
	a=getw(fp);
	while(!feof(fp))
	{
		printf("%d",a);
		a=getw(fp);
	}

	fclose(fp);
}

