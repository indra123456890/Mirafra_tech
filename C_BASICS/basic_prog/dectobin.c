/*#include<stdio.h>
int main()
{
int n,r[10],j,i=0;
printf("enter the number\n");
scanf("%d",&n);
while(n>0)
{
r[i]=n%2;
n=n/2;
i++;
}
for(j=i-1;j>=0;j--)
{
printf("%d",r[j]);
}
}*/


//using forloop

#include<stdio.h>
int main()
{
int n,r[10],j,i;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;n>0;i++)
{
r[i]=n%2;
n=n/2;
}

for(j=i-1;j>=0;j--)
{
printf("%d",r[j]);
}
}

