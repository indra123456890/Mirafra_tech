#include<stdio.h>
int main()
{
	int a1[3]={1,2,3};
	int a2[6]={1,2,3,4,5,6};
	int b[100],i,j,k=0,n=9;
	for(i=0;i<3;i++)
	{
		b[k]=a1[i];
		k++;
	}

	for(j=0;j<6;j++)
	{
		b[k]=a2[j];
		k++;
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]==b[j])
			{
				int k;
				for(k=j;k<n;k++)
				{
					b[k]=b[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",b[i]);
	}
}


