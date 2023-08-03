#include<stdio.h>
int i,n;
void swap(int arr[],int n)
{
int c,j;
for(i--,j=0;j<i;j++,i--)
{       
	c=arr[j];
	arr[j]=arr[i];
	arr[i]=c;
}
for(j=0;j<n;j++)
{
	printf("%d",arr[j]);
}
printf("\n");
}

int main()
{
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	swap(arr,n);
}

