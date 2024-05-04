/*WAP implement addition functionality with out using ADD('+') Operator.*/ 
#include<stdio.h>
void binry(int n)
{
printf("kamal\n");

	int i=sizeof(int)*8-1;
	for(;i>=0;i--)
	{
		if(n&(1<<i))
			printf("1");
		else
			printf("0");
	}
	printf("new line\n");
}
int main()
{
	int a,b,x;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("a:");
	binry(a);
	printf("b:");
	binry(~b);
	x=a-(~b);
	printf("%d\n",x);
	binry(x);
	x=x-1;
	binry(x);
	printf("%d\n",x);

}

