#include<stdio.h>
int strcmp(char *s1,char *s2)
{
	int x;
	while(*s1)
{
		if(*s1>*s2)
			return -1;
	if(*s1<*s2)
		return 1;
	if(*s1==*s2)
		x=0;
	*s1++;
	*s2++;
}
return x;
}

int main()
{
	char s1[50],s2[50];
	int i;
	printf("str1:");
	scanf("%s",s1);
	printf("str2:");
	scanf("%s",s2);
	i=strcmp(s1,s2);
	printf("%d\n",i);
       
	if(i==1)
	{
		printf("\n%s is greater than %s\n",s2,s1);
	}
	else if(i==-1)
	{
		printf("\n%s is greater than %s\n",s1,s2);
	}
	else
	{
		printf("both are equal");
	}
}

