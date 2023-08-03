#include<stdio.h>
void swap(int *p1,int *p2,int *p3);
int main()
{
int a,b,c;
printf("enter the variables");
scanf("%d %d %d",&a,&b,&c);
swap(&a,&b,&c);
printf("a=%d\nb=%d\nc=%d\n",a,b,c);
}





void  swap(int *p1,int *p2,int *p3)
{
int p4;
{
p4=*p1;
*p1=*p2;
*p2=*p3;
*p3=p4;
}
}



