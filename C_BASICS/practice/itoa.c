#include<stdio.h>

void itoa(int a)
{
	int i,j,r;
	char b,c[10];
	for(i=0;a>0;i++)
	{
		c[i]=a%10+'0';
		a=a/10;
	}
	c[i]='\0';
	for(j=i-1,i=0;i<j;i++,j--)
	{
		b=c[i];
		c[i]=c[j];
		c[j]=b;
	}
	printf("%s",c);
}
int main()
{
	int a=123;
	itoa(a);
}

