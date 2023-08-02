//using bitwise

/*#include<stdio.h>
int main()
{
int n,c=0,i=0;
scanf("%d",&n);
for(i=0;i<=4;i++)
{
if(n&(1<<i))
{
c++;
}
}
printf("%d",c);
}*/

//normal

#include<stdio.h>
int main()
{
int n=10,c=0;
while(n>0)
{
n=n/10;
c++;
}
printf("%d",c);
}
