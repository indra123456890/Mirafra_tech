#include<stdio.h>
int main()
{
int i;
int s[10]={1,2,3,4,5,6,7,8,9,10};
int *p;
for(i=0;i<10;i++)
{
p=&s[i];
printf("adress %d elements is:%p\n",i+1,p);
printf("variable:%d\n",*p);
}
}

