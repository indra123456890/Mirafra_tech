/*#include<stdio.h>
int main()
{
int a[4]={0,1,3,5};
int i=0,j=1;
while(a[j]-a[i]==1)
{
i++;
j++;
}

printf("%d",a[j]-1);
}*/

#include<stdio.h>
int main()
{
int a[4]={0,1,3,5};
int i=0,j=1;
while(i<=2&&j<=3)
{
if(a[j]-a[i]!=1)
{
printf("%d ",a[j]-1);
}
i++;
j++;
}
}
