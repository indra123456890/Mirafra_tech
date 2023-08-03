#include<stdio.h>
int product(int x,int y);
int main()
{
	int R,x,y;
	R=product(x,y);
	printf("%d\n",R);
}
       int  product(int a,int b)
{
	int i,x,y,p=0;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		p=a+p;
	}
	return p;
}
