//Write a program in C to compute the sum of all elements in an array using pointers.

//basic
/*#include<stdio.h>
int main()
{
int a[6],i,sum=0;
printf("enter array elements");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
sum=sum+a[i];
}
printf("%d\n",sum);
}*/


//using pointers


#include<stdio.h>
int main()
{
int sum=0;
int a[5],i,*p;
printf("enter array elements\n");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
p=a;
for(i=0;i<=5;i++)
{
sum=sum+(*p);
p++;
}
printf("%d",sum);
}

