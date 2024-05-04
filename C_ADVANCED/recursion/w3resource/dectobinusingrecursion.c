#include<stdio.h>
#include<stdlib.h>
int* dec(int n)
{
static int i=0;
static int k;
static int c;
int  p;
int *r=(int*)malloc(1*5);
if(c>k)
return r;
while(n)
{
r[i]=n%2;
n=n/2;
i++;
}
c=0;
k=i-1;
while(c<k)
{
p=r[k];
r[k]=r[c];
r[c]=p;
c++;
k--;
}
return dec(n);
}


int main()
{
int n,i;
int *p;
scanf("%d",&n);
p=dec(n);
for(i=0;i<5;i++)
{
printf("%d",p[i]);
}
}
