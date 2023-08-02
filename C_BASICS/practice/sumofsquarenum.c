#include<stdio.h>
int main()
{
	int n,res=0,i;
	printf("enter the number to sum the square of nums");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i);
		res=res+(i*i);
	}	
	printf("res=%d",res);
}
