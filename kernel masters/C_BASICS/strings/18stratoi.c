#include<stdio.h>
int atoi(char a[])
{
	int s=0,i,d=1;
	for(i=0;a[i]!=0;i++)
{	/*for(i=i-1;i>=0;i--)
	{
		s+=(a[i]-48)*d;
		d*=10;
	}*/
s=(s*10)+a[i]-48;
}
	return s;
}
int main()
{
	char a[50];
	int b;
	printf("ascii number of int.\n");
	printf("str:");
	scanf("%s",a);
	b=atoi(a);
	printf("%d\n",b);
}

