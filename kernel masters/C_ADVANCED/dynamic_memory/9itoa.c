#include<stdio.h>
#include<stdlib.h>
char *itoa(int a,char s[])
{
	int r,i=0,j,c;
	while(a!=0)
	{
		r=(a%10)+48;
		a=a/10;
		s[i]=r;
		i++;
	}
	s[i]=0;
	for(i=0;s[i]!=0;i++);
	for(j=i-1,i=0;j>0;i++,j--)
	{
		c=s[j];
		s[j]=s[i];
		s[i]=c;
	}
	return s;
}

int main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	char*s=(char*)malloc(10);
	s=itoa(a,s);
	printf("%s\n",s);
}
