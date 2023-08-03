#include<stdio.h>

void itoa(int a)
{
	int i=0,r,j;
	char b,c[10];
	while(a!=0)
	{
		r=a%10;
		a=a/10;
		c[i]=r+48;
		i++;
	}
	c[i]=0;
	for(j=i-1,i=0;i<j;i++,j--)
	{
		b=c[i];
		c[i]=c[j];
		c[j]=b;
	}
	printf("%s\n",c);
}

int main()
{
	int a=123;
	itoa(a);
}
