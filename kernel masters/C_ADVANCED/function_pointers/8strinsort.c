/*8) Repeat command line argument string sorting using swapping function using call by reference of pointers.*/

#include<stdio.h>
#include<string.h>
void Asorting(char *s[],int i,int argc);
void Dsorting(char *s[],int i,int argc);
int icomparison(char s1[],char s2[]);
int cmp(char s1[],char s2[]);
void swap(char**p,char **s);
int main(int argc,char *argv[])
{
	int i,j,x;
	void (*p[])(char *[],int,int)={Asorting,Dsorting};
	if(argc>0)
	{	
		if((argv[1][1]=='i'&&argv[1][0]=='-')&&(argv[2][1]=='r'||argv[2][0]=='-'))
		{
			i=3;
			p[1](argv,i,argc);
			for(i=3;i<argc;i++)
				printf("%s\n",argv[i]);
			return 0;
		}
		else if(argv[1][0]=='-'&&argv[1][1]=='r')
		{
			i=2;
			p[1](argv,i,argc);
			for(i=2;i<argc;i++)
				printf("%s\n",argv[i]);
			return 0;
		}
		else if(argv[1][0]=='-'&&argv[1][1]=='i')
		{
			i=2;
			p[0](argv,i,argc);
			for(i=2;i<argc;i++)
				printf("%s\n",argv[i]);
			return 0;
		}					
		else
		{
			i=1;
			p[0](argv,i,argc);
			for(i=1;i<argc;i++)
				printf("%s\n",argv[i]);
			return 0;

		}
	}
}
int icomparison(char s1[],char s2[])
{
	int i;
char c,d;
	for(i=0;(s1[i]!=0||s2[i]!=0);i++)
	{
		if(s1[i]>96&&s1[i]<123)
			c=s1[i]-32;
		else
			c=s1[i];
		if(s2[i]>96&&s2[i]<123)
			d=s2[i]-32;
		else
			d=s2[i];
		if(c<d)
			return -1;
		if(d<c)
			return 1;
	}
	return 0;

}
int cmp(char s1[],char s2[])
{
	int i;
	for(i=0;(s1[i]!=0||s2[i]!=0);i++)
	{
		if(s1[i]<s2[i])
			return -1;
		if(s2[i]<s1[i])
			return 1;
	}
	return 0;
}
void Asorting(char **s,int i,int argc)
{
	int x,j,d;
	char *p;
	d=i;
	for(;d<(argc-1);d++)
	{
		for(j=i;j<(argc-1);j++)
		{
			if(s[1][0]=='-'&&s[1][1]=='i')
				x=icomparison(s[j],s[j+1]);
			else
				x=cmp(s[j],s[j+1]);
			if(x==1)
			{
			/*	p=s[j];
				s[j]=s[j+1];
				s[j+1]=p;*/	
				swap(&s[j],&s[j+1]);	
			}
		}
	}
}
void Dsorting(char **s,int i,int argc)
{
	char *p;
	int x,j,d;
	d=i;
	for(;d<(argc-1);d++)
	{
		for(j=i;j<(argc-1);j++)
		{
			if(s[1][0]=='-'&&s[1][1]=='i')
				x=icomparison(s[j],s[j+1]);
			else
				x=cmp(s[j],s[j+1]);
			if(x==-1)
			{
				/*p=s[j];
				s[j]=s[j+1];
				s[j+1]=p;*/
				swap(&s[j],&s[j+1]);	
			}
		}
	}
}
void swap(char **p,char **s)
{
	char *t;
	t=*p;
	*p=*s;
	*s=t;
}



