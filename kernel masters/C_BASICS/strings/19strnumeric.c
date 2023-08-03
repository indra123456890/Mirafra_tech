#include<stdio.h>
int isnumeric(char s[])
{
	int i,c=0;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			c++;
	}
	if(c==i)
		return 1;
	else 
		return 0;
}


int main()
{
	char s[20];
	int n;
	printf("enter the numeric character\n");
	scanf("%10[^\n]s",s);
	n=isnumeric(s);
	if(n>0)
		printf("it is numeric\n");
	else 
		printf("it is not a numeric\n");
	return 0;
}
