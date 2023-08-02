#include<stdio.h>
int main()
{
int x=5,y=10,z=15;
int *arr[5]={&x,&y};
arr[2]=&z;
printf("%d%d%d",*arr[0],*arr[1],*arr[2]);
}
