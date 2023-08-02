#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	//int c[i];
	int i;
	int firstbig=a[0];
	int secondbig=a[0];
	for(i=1;i<=10;i++)
	{
		if(a[i]>firstbig)
		{
			secondbig=firstbig;
			firstbig=a[i];
		}
		else if(a[i]>secondbig)
		{
			secondbig=a[i];
		}
	}
	printf("%d\n",secondbig);
}
