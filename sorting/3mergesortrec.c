#include<stdio.h>
void mg(int a[],int low,int mid,int up)
{
	int i,j,k;
	i=low;
	j=mid+1;
	k=low;
	int b[up];
	while(i<=mid&&j<=up)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=up)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=low;k<=up;k++)
	  {
	  a[k]=b[k];
	  }
}


void ms(int a[],int low,int up)
{
	int mid;
	if(low<up)
	{
		mid=(low+up)/2;
		ms(a,low,mid);
		ms(a,mid+1,up);
		mg(a,low,mid,up);
	}
}

int main()
{
	int n,i;
	printf("enter size:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ms(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
