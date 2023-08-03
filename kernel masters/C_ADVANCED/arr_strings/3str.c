/*3) Declare a character pointer array ,initialise it with read only strings. Sort the array in ascending order of strings and print it  back.*/





#include<stdio.h>
int myystrcmp(char *s,char *d);
int main()
{
	int i,j,x;
	char *a[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"},*temp;
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			x=myystrcmp(a[i],a[j]);
			if(x>0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<7;i++)
	{
		printf("%s\n",a[i]);
	}
}


int myystrcmp(char *s,char *d)
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

