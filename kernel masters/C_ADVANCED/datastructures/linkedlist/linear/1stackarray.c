#include<stdio.h>
#define SIZE 10
int push(int s[],int t)
{
	if(t==SIZE-1)
	{
		printf("stack is full\n");
	}
	else
	{
		int n;
		scanf("%d",&n);
		t++;
		s[t]=n;
	}
	return t;
}
int pop(int s[],int t)
{
	if(t==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("popping %d\n",s[t]);
		t--;
	}
	return t;
}
int main()
{
	int s[SIZE];
	int top=-1;
	int ch;
	while(1)
	{
		printf("choose 1.push\n 2.pop\n 3.quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:top=push(s,top);
			       break;
			case 2:top=pop(s,top);
			       break;
			default:goto EXIT;
		}
	}
EXIT:printf("completed.\n");
}

