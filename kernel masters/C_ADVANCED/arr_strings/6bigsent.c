/*6) Read some sentences as input and print the longest sentence of all as output.*/
#include<stdio.h>
int mystrlen(char a[])
{
int i;
for(i=0;a[i]!=0;i++);
return i;
}
int main()
{
int i,sen,size,big,n,x;
printf("enter given sentence and size");
scanf("%d%d",&sen,&size);
char a[sen][size];
for(i=0;i<sen;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<sen;i++)
{
if(i==0)
{
big=mystrlen(a[i]);
x=i;
}
else
{
n=mystrlen(a[i]);
if(n>big)
{
big=n;
x=i;
}
}
}
printf("long sentence:%d\n",x+1);
}
