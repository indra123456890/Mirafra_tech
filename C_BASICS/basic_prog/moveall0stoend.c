#include<stdio.h>
int main()
{
	int a[5]={1,0,2,0,4};
	int i,j=0,k=0;
	int b[5];
	for(i=0;i<5;i++)
	{
		if(a[i]!=0)
		{
			b[j]=a[i];
			//a[j]=0;
			//a[j+1]=a[j];
			j++;
		}
	}
	for(k=j;k<5;k++)
	{
		b[k]=0;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",b[i]);
	}
}
