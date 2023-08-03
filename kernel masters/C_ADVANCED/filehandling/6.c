//Write a program that compares two files and returns 0 if they are equal and 1 if they are not equal.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	FILE *fptr;
	FILE *fptr1;
	fptr=fopen("xuv.txt","w");
	if(fptr==NULL)
	{
		printf("error in open file\n");
	}
	printf("enter the name");
	scanf("%d",&a);
	b=getw(a,fptr);
	fclose(fptr);
	fptr1=fopen("stu.txt","w");
	if(fptr1==NULL)
	{
		printf("error to  open file\n");
	}
	putw(a,fptr1);
	fclose(fptr1);
	while(!feof(fptr))
	{
		b=getw(a,fptr);
	}
	if(fptr==fptr1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

