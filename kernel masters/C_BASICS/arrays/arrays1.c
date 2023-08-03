#include<stdio.h>
int main()
{
int i, num[100];
for(i=0;i<100;i++)
printf("%d\n",num[i]=i+1);
printf("even numbers\n");
for(i=0;i<100;i++)
if(num[i]%2==0)
printf("%d\n",num[i]);
printf("odd numbers\n");
for(i=0;i<100;i++)
if(num[i]%2!=0)
printf("%d\n",num[i]);
printf("adding 5\n");
for(i=0;i<100;i++)
printf("%d\n",num[i]+5);
}

