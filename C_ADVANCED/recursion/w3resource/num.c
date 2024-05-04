//print elements in array

/*#include<stdio.h>
void num(int n,int n1)
{
static int k=0;
if(n1==k)
return;
printf("%d",n);
k++;
return  num(n+1,n1);
}
int main()
{
int n=5,i;
//scanf("%d",&n);
int a[5]={1,2,3,4,5};
for(i=0;i<n;i++)
{
printf("%d",num(a[i],n));
}
}*/

#include<stdio.h>
void num (int n[],int l,int n1)
{
//static int k=0;
if(l==n1)
return;
printf("%d",n[l]);
//k++;
 num(n,l+1,n1);
}
int main()
{
int n=5,i=0;
//scanf("%d",&n);
int a[5]={1,2,3,4,5};
num(a,i,n);
}


