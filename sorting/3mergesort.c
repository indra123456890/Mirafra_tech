//MERGE SORT

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
	int i,j,start,mid,end;
	for(i=1;i<=(up-low);i=i*2)
	{
		for(j=low;j<up;j+=2*i)
		{
			start=j;
			mid=j+i-1;
			end=j+(2*i)-1;
			if(up<end){
				end=up;
			}
			mg(a,start,mid,end);
		}
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
	printf("\n");
}

