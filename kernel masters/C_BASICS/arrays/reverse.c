include<stdio.h>
int main()
{
int r,i;
printf("enter size of array\n");
scanf("%d",&r);
int arr[r];
for(i=1;i<=r;i++)
{
scanf("%d",&arr[i]);
}
for(i=r;i>=1;i--)
{
printf("%d",arr[i]);
}
}

