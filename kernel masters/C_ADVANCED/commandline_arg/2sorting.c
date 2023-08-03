#include<stdio.h>
#include<string.h>
int icomparison(char s1[],char s2[])
{
	int i;
	for(i=0;(s1[i]!=0||s2[i]!=0);i++)
	{
		if(s1[i]<s2[i]||s1[i]<s2[i]+32||s1[i]+32<s2[i])
			return -1;
		if(s1[i]>s2[i]||s1[i]>s2[i]+32||s1[i]+32>s2[i])
			return 1;
	}
	return 0;
}
int cmp(char s1[],char s2[])
{
	int i;
	for(i=0;(s1[i]!=0&&s2[i]!=0);i++)
	{
		if(s1[i]<s2[i])
			return -1;
		if(s2[i]<s1[i])
			return 1;
	}
	if(s1[i]==0&&s2[i]==0)
		return 0;
	if(s1[i]==0&&s2[i]!=0)
		return -1;
	if(s1[i]!=0&&s2[i]==0)
		return 1;
}
void Asorting(char s1[],char s2[])
{
	int i=0;
		char p[100];
		strcpy(p,s1);
		strcpy(s1,s2);
		strcpy(s2,p);
		/*for(i=0;s1[i]!=0;i++)
		  p[i]=s1[i];
		  for(i=0;s2[i]!=0;i++)
		  s1[i]=s2[i];
		  s1[i]=s2[i];
		  for(i=0;p[i]!=0;i++)
		  s2[i]=p[i];
		  s2[i]=p[i];*/
}
void Dsorting(char s1[],char s2[])
{
	int i=0;
		char p[100];
		strcpy(p,s1);
		strcpy(s1,s2);
		strcpy(s2,p);
		/*for(i=0;s1[i]!=0;i++)
		  p[i]=s1[i];
		  p[i]=s1[i];
		  for(i=0;s2[i]!=0;i++)
		  s1[i]=s2[i];
		  s1[i]=s2[i];
		  for(i=0;p[i]!=0;i++)
		  s2[i]=p[i];
		  s2[i]=p[i];*/
}
int main(int argc,char *argv[])
{
	int i,j,x;
	if(argv[1][0]=='-'&&(argv[1][1]=='r'||argv[1][1]=='i'))
	{
		if((argv[1][1]=='r'||argv[1][1]=='i')&&(argv[2][1]=='r'||argv[2][1]=='i'))
		{
			for(i=3;i<(argc-1);i++)
			{
				for(j=3;j<(argc-1);j++)
				{
					x=icomparison(argv[j],argv[j+1]);
					if(x==-1)
						Dsorting(argv[j],argv[j+1]);
				}
			}
			for(i=3;i<argc;i++)
				printf("%s\n",argv[i]);
			return 0;
		}
		else if(argv[1][1]=='r')
		{
			for(i=2;i<(argc-1);i++)
			{
				for(j=2;j<(argc-1);j++)
				{
					x=cmp(argv[j],argv[j+1]);
					if(x==-1)
						Dsorting(argv[j],argv[j+1]);
				}
			}
			for(i=2;i<argc;i++)
				printf("%s\n",argv[i]);
			return 0;
		}
		else if(argv[1][1]=='i')
		{
			for(i=2;i<(argc-1);i++)
			{
				for(j=2;j<(argc-1);j++)
				{
					x=icomparison(argv[j],argv[j+1]);
					if(x==1)
						Asorting(argv[j],argv[j+1]);
				}
			}
			for(i=2;i<argc;i++)
				printf("%s\n",argv[i]);
			return 0;
		}					
	}
	else
	{
		for(i=1;i<(argc-1);i++)
		{
			for(j=1;j<(argc-1);j++)
			{
				x=cmp(argv[j],argv[j+1]);
				if(x==1)
					Asorting(argv[j],argv[j+1]);
			}
		}
		for(i=1;i<argc;i++)
			printf("%s\n",argv[i]);
		return 0;
	}
}

