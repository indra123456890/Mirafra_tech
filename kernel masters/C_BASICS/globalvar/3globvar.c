#include<stdio.h>

void add(int a,int b);
void sub(int a, int b);
void mul(int a,int b);
void div(int a,int b);
void mod(int a,int b);

int c;

int main()
{
int a,b;
	char ch;
	scanf("%d %c %d",&a,&ch,&b);
	if(ch=='+')
	{
		add(a,b);
                printf("%d\n",c);
	}
	if(ch=='-')
	{
		sub(a,b);
                printf("%d\n",c);
	}
	if(ch=='*')
	{
		mul(a,b);
                printf("%d\n",c);
	}
	if(ch=='/')
	{
		div(a,b);
                printf("%d\n",c);
	}
	if(ch=='%')
	{
		mod(a,b);
                printf("%d\n",c);
	}
}


void add(int a,int b)
{
	
	c=a+b;
}
	
void sub(int a,int b)
{

	c=a-b;

}
void mul(int a,int b)
{
	
        c=a*b;
	
}
void div(int a,int b)
{
	
	c=a/b;
	
}
void mod(int a,int b)
{

	c=a%b;
	
}
