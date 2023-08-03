#include<stdio.h>
int main()
{
	int arr[5]={},i,ar[10]={2.4,5.6,7.3},a[3]={1,2,3,4,5},brr[0]={},br[0]={1,2,3,4,5},b[]={};
	char c['a'];
	{
		for(i=0;i<5;i++)
		{
			printf("%d",arr[i]);
		}
		printf("size:%ld\n",sizeof(arr));
	}
	for(i=0;i<10;i++)
	{
		printf("%d",ar[i]);
	}
	{
		printf("size:%ld\n",sizeof(ar));
	}
	for(i=0;i<3;i++)
	{
		printf("%d",a[i]);
	}
	{
		printf("size:%ld\n",sizeof(a));
	}
	{
		printf("size:%ld\n",sizeof(brr));
	}
	for(i=0;i<5;i++)
	{
		printf("%d",br[i]);
	}
	{
		printf("size:%ld\n",sizeof(b));
	}
	{
		printf("size:%ld\n",sizeof(br));
	}
	{
		printf("size:%ld\n",sizeof(c));
	}
}

