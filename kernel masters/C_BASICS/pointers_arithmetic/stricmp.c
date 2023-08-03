#include<stdio.h>
int sticmp(char *s,char *d)
{
	int i=0,x;
	while(*s)
	{
		if(*s>=65&&*s<=90)
		{
			*s=*s+32;
		}
		else
			if(*d>=65&&*d<=90)
			{
				*d=*d+32;
			}
		if(*s>*d)
			return 1;
		if(*s<*d)
			return -1;
		if(*s==*d)
			x=0;
		i++;
		*s++;
		*d++;
	}
	return x;
}

int main()
{
	char s[50],d[50];
	int i;
	printf("str1:");
	scanf("%s",s);
	printf("str2:");
	scanf("%s",d);
	i=sticmp(s,d);
	printf("%d\n",i);
if(i==1)
{
printf("%s:str1 is greater than %s:str2",s,d);
}
else if(i==-1)
{
printf("%s:str1 is smaller than %s:str2",d,s);
}
else if(i==0)
{
printf("both are equal");
}
}

