#include<stdio.h>
#include<stdlib.h>
void  recuritoa(int n,char d[],int l)
{
int r;
	if(n==0 || l<0)
		return ;
	else

			r=n%10;
			d[l]=r+48;
	l--;
	return recuritoa(n/10,d,l);
}

int main()
{
	int a=123;
int i=2;
	char s[3];
recuritoa(a,s,i);
	printf("%s",s);
}
