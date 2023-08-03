/*8) 
  " Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. Arrays should not be sorted after merging. arrays should always stay sorted while they are being merged into another array.
  Assume that the input arrays are sorted.
  eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20"*/


#include<stdio.h>
#include<stdlib.h>
void fun (int*p,int n);
int * merge(int*,int*,int,int);
int main()
{
	int *p,*q,*r,n,j=0,i=0,l,m;
	printf("enter 1starray size\n");
	scanf("%d",&n);
	printf("enter 2ndarray size\n");
	scanf("%d",&m);
	p=((int*)malloc(n*sizeof(int)));
	q=((int*)malloc(m*sizeof(int)));
	r=((int*)malloc((m+n)*sizeof(int)));
	printf("enter array1\n");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	fun(p,n);
	printf("enter array2\n");
	for(j=0;j<m;j++,i++)
		scanf("%d",(q+j));
	fun(q,m);
	for(j=0;j<n;j++,i++)
		printf("%d ",*(p+j));
	printf("\n");
	for(j=0;j<m;j++,i++)
		printf("%d ",*(q+j));
	printf("\n");
	r=merge(p,q,n,m);
	for(i=0;i<(m+n);i++)
		printf("%d ",r[i]);
}
int* merge(int *p,int *q,int n,int m)
{
	int i,j,l;
	int *r=((int*)malloc((m+n)*sizeof(int)));
	for(i=0,j=0,l=0;l<(m+n)&&(i<n||j<m);)
	{
		if(i==0&&j==0)
		{
			if(p[i]<q[j])
			{
				r[l]=p[i];
				i++;
				l++;
			}
			else if(p[i]>q[j])
			{
				r[l]=q[j];
				j++;
				l++;
			}
			else if(p[i]==q[i])
			{
				r[l]=p[i];
				i++;
				j++;
				l++;
			}
		}
		else if(i<n&&j<m)
		{
			if((p[i]<q[j])&&(p[i]!=r[l-1]))
			{
				r[l]=p[i];
				i++;
				l++;
			}
			else if((q[j]<p[i])&&(r[l-1]!=q[j]))
			{
				r[l]=q[j];
				j++;
				l++;
			}
			else if((p[i]==q[j])&&(r[l-1]!=p[i]))
			{
				r[l]=p[i];
				i++;
				j++;
				l++;
			}
			else if((p[i]<q[j])&&(p[i]==r[l-1]))
			{
				i++;
			}
			else if((q[j]<p[i])&&(q[j]==r[l-1]))
			{
				j++;
			}
		}
		else if(i>=n)
		{
			if(q[j]!=r[l-1])
			{
				r[l]=q[j];
				l++;
				j++;
			}
			else
				j++;
		}		
		else if(j>=m)
		{
			if(p[i]!=r[l-1])
			{
				r[l]=p[i];
				l++;
				i++;
			}
			else
				i++;
		}
	}
	return r;
}
void fun (int*p,int n)
{
	int i=0,d,j;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1);j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				d=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=d;
			}
		}
	}
}


