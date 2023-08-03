
#include<stdio.h>
int main()
{
int i,n,a;
printf("enter 2 number:\n");
scanf("%d%d",&a,&n);
i=a;
printf("odd numbers:\n");
while(i<=n)
{
if(i%2==1)
{
printf("%d\n",i);
}
i++;
}
printf("even numbers:\n");
i=a;
while(i<=n)
{
if(i%2==0)
{
printf("%d\n",i);
}
i++;
}
return 0;
}

