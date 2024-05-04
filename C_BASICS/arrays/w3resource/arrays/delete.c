//delete elemnt in given pos

/*#include<stdio.h>
int main()
{
	//int k=5;
	int a[5]={1,2,3,4,5};
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==n)
		{
			a[i]=a[i+1];
			a[i+1]=a[i+2];
			//k--;
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
}*/

#include<stdio.h>
int main()
{
int n=5;
int i,pos;
int a[n];
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
i=0;
scanf("%d",&pos);
while(i!=pos)
{
i++;
}
while(i<=5)
{
a[i]=a[i+1];
i++;
}
n--;

for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}
