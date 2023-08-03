#include<stdio.h>
void add(void);
void sub(void);
void mul(void);
void div(void);
void mod(void);

int a,b,c;

int main()
{
	char ch;
	scanf("%d %c %d",&a,&ch,&b);
	if(ch=='+')
	{
		add();
                printf("%d\n",c);
	}
	if(ch=='-')
	{
		sub();
                printf("%d\n",c);
	}
	if(ch=='*')
	{
		mul();
                printf("%d\n",c);
	}
	if(ch=='/')
	{
		div();
                printf("%d\n",c);
	}
	if(ch=='%')
	{
		mod();
                printf("%d\n",c);
	}
}


void add()
{
	
	c=a+b;
}
	
void sub()
{

	c=a-b;

}
void mul()
{
	
        c=a*b;
	
}
void div()
{
	
	c=a/b;
	
}
void mod()
{

	c=a%b;
	
}

