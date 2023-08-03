#include<stdio.h>
int stncmp(char *s,char *d,int n)
{
	int x;
	int i=0;
	while(i<n)
	{
		if(*s>*d)
			return -1;
		if(*s<*d)
			return 1;
		if(*s==*d)
			x=0;
		*s++;
		*d++;
		i++;
	}
	return x;
}
int main()
{
	char s[50],d[50];
	int i,n;
	printf("str1:");
	scanf("%s",s);
	printf("str2:");
	scanf("%s",d);
	printf("size:");
	scanf("%d",&n);
	i=stncmp(s,d,n);
	printf("%d\n",i);
	if(i==1)
	{
		printf("%s is greater than %s",d,s);
	}
	else if(i==-1)
	{
		printf("%s is greater than %s",s,d);
	}
	else
	{
		printf("both are equal");
	}
}
