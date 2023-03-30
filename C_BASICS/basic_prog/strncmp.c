#include<stdio.h>
int mystrrrncmp(char s1[],char s2[],int n)
{
	int i,j;
	for(i=0;s1[i]&&s2[i]!=0,i<n;i++)
	{
		if(s1[i]>s2[i])
			return 1;
		if(s1[i]<s2[i])
			return -1;
	}
	return 0;
}

int main()
{
	int n,r;
	char s1[100];
	char s2[100];
	printf("enter string 1\n");
	scanf("%s",s1);
	printf("enter string 2\n");
	scanf("%s",s2);
	printf("enter no of characters to compare");
	scanf("%d",&n);
	r=mystrrrncmp(s1,s2,n);
	if(r==1)
	{
		printf("%s is greater than %s",s1,s2);
	}
	if(r==-1)
	{
		printf("%s is greater than %s",s2,s1);
	}
	else
	{
		printf("both are equal\n");
	}
}


