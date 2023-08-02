/*#include<stdio.h>
int main()
{
	int a[5]={4,1,3,5,2};
	int i,j,big,small;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				big=a[j];
			}
			if(a[i]>a[j])
			{
				small=a[i];
			}
		}
	}
	printf("big small is %d %d\n",big,small);
}*/


#include<stdio.h>
int main()
{
	int a[5]={22,3,4,5,6};
	int i,j,big,small;
	big=a[0];
	small=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>big)
{
			big=a[i];
	}
	else if(a[i]<small)
	{
		small=a[i];
	}
}
	printf("%d %d",big,small);
}
