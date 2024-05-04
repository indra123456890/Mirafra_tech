//int *a[5];
//a is array of 10 integer pointers
//to access use we can use normal indexing methods
//array of pointers iscollection of pointers where each element points to different memory location
#include<stdio.h>
int main()
{
int x=5,y=6,z=10;
int *a[5]={&x,&y};
a[2]=&z;
printf("%d",*a[0]);
printf("%d",*a[1]);
printf("%d",*a[2]);
}
