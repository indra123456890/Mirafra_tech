#include<stdio.h>
int palin(char s[])
{
	int i,j,x;
	for(i=0;s[i]!=0;i++);
	for(j=i-1,i=0;i<j;j--,i++)
	{
		if(s[i]==s[j])
		{
			x=0;
		}
		else
		{
			x=-1;
		}
	}
	return x;
}

int main()
{
	char s[10];
	int x;
	printf("enter str:");
	scanf("%[^\n]s",s);
	x=palin(s);
	if(x==0)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
}
