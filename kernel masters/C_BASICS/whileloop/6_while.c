#include<stdio.h>
int main()
{
int a,b,c,n,i=2;
printf("enter no of inputs:\n");
scanf("%d",&n);

printf("enter 1 value:");
scanf("%d",&a);

while(i<=n)
{
printf("enter %d value:",i);
scanf("%d",&b);
if(a<b)
{
printf("%d is bigger than %d\n",b,a);
}
else
{
printf("%d is smaller than %d\n",b,a);
}
a=b;
i++;
}
return 0;
}

