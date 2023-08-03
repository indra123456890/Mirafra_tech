/*1.Implement the calculator program using Command line arguments

  eg., input:  >./calc   56 + 671
output : 727


note: when giving * in commandline, always give "*"*/


#include<stdio.h>
int atoi(char s[])
{
	int i,j=1,c=0,d=1;
	for(i=0;s[i]!=0;i++);
	for(i=i-1;i>=0;i--)
	{
		if(s[i]>47&&s[i]<57)
		{
			d=s[i]-48;
			c=c+(d*j);
		}
		j=j*10;
	}
	return c;
}

int main(int argc,char *s[])
{
	int a,b;
	char c;
	a=atoi(s[1]);
	b=atoi(s[3]);
	c=*s[2];
	switch(c)
	{
		case '+':printf("addition is:%d\n",a+b);break;
		case '-':printf("sub is:%d\n",a-b);break;
		case '*':printf("mul is:%d\n",a*b);break;
		case '/':printf("div is:%d\n",a/b);break;
		case '%':printf("mod is:%d\n",a%b);break;
	}
}
