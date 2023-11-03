/*#include<stdio.h>
int main()
{
int a[5]={1,3,5,7,9};
int b[4]={2,4,6,8};
int i=0,j=0;
while(i<5&&j<4)
{
if(a[i]!=b[j]||a[i]==a[j])
{
printf("%d%d",a[i],b[j]);
}
i++;
j++;
}
}*/


#include<stdio.h>
int main()
{
int a[5]={1,3,4,5,7};
int b[4]={2,3,5,6};
int i=0,j=0;
while(i<5&&j<4)
{
if(a[i]!=b[j])
{
printf("%d%d",a[i],b[j]);
i++;
j++;
}
else
{
printf("%d",a[i]);
i++;
j++;
}
}
}
