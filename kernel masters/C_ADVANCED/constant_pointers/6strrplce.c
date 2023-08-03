/*6) "Write a function that takes a main string and two sub strings (need not be same length), and replace every occurrence of first substring with the second substring in main string and return a new string as output.
  eg., input : kernel  e   xxx
output: kxxxrnxxxl"*/


#include<stdio.h>
#include<stdlib.h>
char * fun(char *s,char *d,char *r);
int main()
{
	char *s,*d,*r;
	s=(char*)malloc(100);
	d=(char*)malloc(100);
	r=(char*)malloc(100);
	printf("enter main string\n");
	scanf("%99[^\n]s",s);
	printf("enter substring\n");
	scanf(" %99[^\n]s",d);
	printf("enter replace string\n");
	scanf(" %99[^\n]s",r);
	s=fun(s,d,r);
	puts(s);
	free(r);
	free(d);
}
char * fun(char *s,char *d,char *r)
{
	int i=0,j=0,c=0,e=0,n,size=0,diff=0,k=0;
	for(i=0;s[i]!=0;i++)
	{
		e=i;
		for(j=0;d[j]!=0;j++,e++)
		{
			if(s[e]!=d[j])
				break;
		}
		if(d[j]==0)
			c++;
	}
	for(i=0;d[i]!=0;i++);
	for(j=0;r[j]!=0;j++);
	diff=j-i;
	if(diff>=0)
	{
		k=diff;
		size=(j-i)*c;
		for(i=0;s[i]!=0;i++);
		size=size+i;
			s=(char*)(realloc(s,size));
		for(i=0;s[i]!=0;i++)
		{
			diff=k;
			e=i;
			for(j=0;d[j]!=0;j++,e++)
			{
				if(s[e]!=d[j])
					break;
			}
			if(d[j]==0)
			{
				for(;diff!=0;diff--)
				{
					for(n=0;s[n]!=0;n++);
					for(;i<n;n--)
						s[n+1]=s[n];
				}
				for(j=0;r[j]!=0;j++,i++)
					s[i]=r[j];
					--i;
			}
		}
		return s;
	}
	else
	{
		diff=i-j;
		k=diff;
		for(i=0;s[i]!=0;i++)
		{
			k=diff;
			e=i;
			for(j=0;d[j]!=0;j++,e++)
			{
				if(s[e]!=d[j])
					break;
			}
			if(d[j]==0)
			{
				e=i;
				for(j=0;r[j]!=0;j++,e++)
					s[e]=r[j];
				while(k!=0)
				{
					j=e;
					for(;s[j]!=0;j++)
						s[j]=s[j+1];
					k--;
				}
			}
		}
		s=(char*)realloc(s,i);
		return s;
	}
}


