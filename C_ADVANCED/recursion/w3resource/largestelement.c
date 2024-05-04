//mistake in normal we take big =a[0],here directly take big is 0 and comaore with each element in array

/*#include<stdio.h>
int large(int n[],int l,int k, int n1)
{
static int big;

//static int h=0;
if(k==n1)
return big;
//big=n[l];
if(n[l]>big)
{
big=n[k];
//h++;
}
return large(n,l,k+1,n1);
}
int main()
{
int a[5]={1,6,2,4,3};
int i=0,j=1;
printf("%d",large(a,i,j,4));
}*/

#include<stdio.h>
int large(int n[],int l, int n1)
{
static int big;

//static int h=0;
if(l==n1)
return big;
//big=n[l];
if(n[l]>big)
{
big=n[l];
//h++;
}
return large(n,l+1,n1);
}
int main()
{
int a[5]={1,6,2,4,3};
int i=0;
printf("%d",large(a,i,5));
}

