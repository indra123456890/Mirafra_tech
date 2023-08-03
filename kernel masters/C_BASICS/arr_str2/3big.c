#include<stdio.h>
int main()
{
	int a[10],big,i,count=0;
	printf("Enter ten numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i==0)
		{
			big=a[i];
		}
		else
			if(big<=a[i])
			{
				big=a[i];
			}
}
for(i=0;i<10;i++)
{
if(a[i]==big)
count++;
}
printf("big=%d\ncount=%d\n",big,count);
}


