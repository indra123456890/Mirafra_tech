#include<stdio.h>
//worst case:O(n2)
// best case:O(nlogn)
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int partition(int a[],int low,int up)
{
	int pivot,start,end;;
	pivot=a[low];
	start=low;
	end=up;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[low],&a[end]);
	return end;
}

void qs(int a[],int low,int up)
{
	int loc;
	if(low<up)
	{
		loc=partition(a,low,up);
		qs(a,low,loc-1);
		qs(a,loc+1,up);
	}
}

int main()
{
	int n,i;
	printf("enter size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qs(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

}
