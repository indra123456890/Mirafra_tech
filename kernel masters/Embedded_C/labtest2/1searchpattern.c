#include<stdio.h>
int main()
{
	int num,count=0,pattern,i;
	printf("enter num");
	scanf("%x",&num);
	scanf("%x",&pattern);

	while (num) 
	{
for(i=0;i<16;i++)
{
		if ((num & pattern) == pattern) 
{

			count++;
		}


		num = num >> 1;
	}

	printf("%d",count);
}
}

