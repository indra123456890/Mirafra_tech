#include<stdio.h>
int main()
{
	int a[5]={1,3,3,4,4},i,j,m;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d ",a[j]);
				break;
			}
		}
	}
}
