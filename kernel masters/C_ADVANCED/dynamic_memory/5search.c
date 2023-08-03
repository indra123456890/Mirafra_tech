/*5) Write a search function that will take an array , its size and an element to search as inputs. Search that element in the array, and return the index of the found element. If not found, return -1.

Call this function to find the element in a statically created array. Use the same function to find an element in a dynamically created array.*/


#include<stdio.h>
int search(int a[],int n,int m)
{
	int i,k=-1;
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			k=i;
			return k;
		}
	}
	return k;
}


int main()
{
	int n,m,i,p;
	printf("enter array size");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elements to search");
	scanf("%d",&m);
	p=search(a,n,m);
	printf("position=%d\n",p);
}



