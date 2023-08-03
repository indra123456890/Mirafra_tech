#include<stdio.h>
void swap(int *,int *);
int main()
{
int i;
int arr[2];
printf("enter the two elements:\n");
for(i=0;i<2;i++)
{
scanf("%d",&arr[i]);
}
swap(&arr[0],&arr[1]);
printf("%d\n",arr[0]);
printf("%d",arr[1]);
}

