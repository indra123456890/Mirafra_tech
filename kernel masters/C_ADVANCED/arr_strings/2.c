/*2.  Declare a 2 dimenstional character array. Read input strings. Sort the array in ascending order of strings and print it  back.*/





#include<stdio.h>
int myystrcmp(char s[],char d[]);
void myystrcpy(char d[],char s[]);
int main()
{
	int i,j,x;
	char c[10];
	char a[7][20];
for(i=0;i<7;i++)
{
scanf("%s\n",a[i]);
}
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			x=myystrcmp(a[i],a[j]);
			if(x>0)
			{
				myystrcpy(c,a[i]);
				myystrcpy(a[i],a[j]);
				myystrcpy(a[j],c);
			}
		}
	}

	for(i=0;i<7;i++)
	{
		printf("%s\n",a[i]);
	}
}


int myystrcmp(char s[],char d[])
{
	int i,x;
	for(i=0;s[i]!=0||d[i]!=0;i++)
	{

		if(s[i]>d[i])
			return 1;
		if(s[i]<d[i])
			return -1;
		if(s[i]==d[i])
			x=0;
	}
	return x;
}

void myystrcpy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
}

