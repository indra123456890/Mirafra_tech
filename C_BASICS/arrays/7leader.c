#include<stdio.h>
int main()
{
	int a[7]={4,5,3,2,1,9,6};
	int i,j;
	int k=a[0],l=0;
	for(i=1;i<7;i++)
	{
		if(i<k)
		{
			if(a[i]>k)
			{
				k=a[i];
			}
		}
		for(j=i;j<7;j++)
		{
			if(l<k)
			{
				if(a[j]>k)
				{
					l=a[j];
				}
			}
		}
	}
	printf("%d%d",k,l);
}

/*#include<stdio.h>
int main()
{
int a[7]={4,5,3,2,1,9,6};
int i,j,l,k=0,c=0,d;
for(i=0;i<7;i++)
{
for(j=1;j<7;j++)
{
if(j<k)
{
if(a[i]<a[j])
{
k=a[j];
}
}
for(l=j;l<=7;l++)
{
if(k<a[j])
{
d=a[j];
}
}
}
printf("%d%d",k,d);
}*/



