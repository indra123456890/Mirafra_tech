//we can directly take n value no if ips from user and in malloc we can assign it as n*sizeof(int)

#include<stdio.h>
#include<stdlib.h>
int main()
{
int *c=(int *)malloc(sizeof(int));
int i;
for(i=0;i<4;i++)
{
scanf("%d",(c+i));//mistake done here is taken as *(c+i) wrong
}
int max=*(c+0);
for(i=1;i<4;i++)
{
if(*(c+i)>max)
{
max=(*(c+i));
}
}
printf("%d",max);
}


