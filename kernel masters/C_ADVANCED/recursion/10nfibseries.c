#include<stdio.h>
int nfibseries(int n)
{
if(n==1||n==2)
{
return 1;
}
else
{
return nfibseries(n-1)+nfibseries(n-2);
}
}
int main()
{
int i,n;
printf("enter the position of a term\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d,",nfibseries(i));
}
}
