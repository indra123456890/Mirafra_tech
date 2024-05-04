#include<stdio.h>
void fun(int arr[])
{
int i=0;
for(i=0;i<5;i++)
{
printf("%d",arr[i]);
}
}
int main()
{
int a[5]={1,2,3,4,5};
fun(a);
}
