#include<stdio.h>
int main()
{
int n=13;
int n1=48;
int i,g;
for(i=1;i<=n && i<=n1;i++)
{
if(n%i==0 && n1%i==0)
{
g=i;
}
}
printf("%d",g);
}




/*#include<stdio.h>
int main()
{
int n1=13;
int n2=48;
int c[10];
int d[2];
int i,j=0,b=0,l,n,k;
for(i=1;i<=48;i++)
{
if(n1%i==0)
{
n=n1/i;
c[j]=n;
j++;
}
}
for(k=1;k<=13;k++)
{
if(n2%i==0)
{
l=n2/k;
d[b]=l;
b++;
}
}
for(j=0;i<9;j++)
{
for(b=0;j<2;b++)
{
if(c[j]==d[b])
{
printf("%d",c[j]);
}
}
}
}*/
