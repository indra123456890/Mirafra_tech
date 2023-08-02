//wap to find out how many times a biggest number occured


#include<stdio.h>
int main()
{
	int a[5]={1,2,4,4,3},i,j,c=0,big=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}

	for(i=0;i<5;i++)
	{
		if(a[i]==big)
		{
			c++;
		}
	}
	printf("big occured\n %d",c);
}

