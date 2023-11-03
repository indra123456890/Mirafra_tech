/*#include<stdio.h>
int main()
{
	int a[5]={1,2,1,3,2};
	int i,j,c=0;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)

		{
			if(a[i]==a[j])
			{
				c++;
				printf("%d occured %d times",a[j],c);
			}
		}
	}
}*/


#include<stdio.h>
int main()
{
	int a[5]={1,2,1,3,2};
	int i,j,c=0,v=1;
	for(i=0;i<5;i++)
	{
		if(a[i]==v)
		{
			c++;
		}
}
		printf("%d occured %d times",v,c);
	}


