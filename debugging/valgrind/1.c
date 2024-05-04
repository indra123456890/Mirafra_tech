#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,n=100;
int (*myarr)=malloc(sizeof(n));
for(i=0;i<n;i++)
{
myarr[101]=i;
}
printf("done");
}
