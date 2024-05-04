#include<stdio.h>
void strss(char s3[],char s2[]);
void strjumb(char s1[],char s2[],char s3[])
{
	int i,j;
	for(i=0,j=0;s1[j]!='\0';j++,i=i+2)
	{
		s3[i]=s1[j];
	}
	strss(s3,s2);
}
void strss(char s3[],char s2[])
{
	int i,j;
	for(i=1,j=0;s2[j]!='\0';j++,i=i+2)
	{
		s3[i]=s2[j];
	}
	s3[i-1]='\0';
	printf("%s",s3);
}
int main()
{
	char s1[10]="ina";
	char s2[10]="kumar";
	char s3[15];
	strjumb(s1,s2,s3);
}
