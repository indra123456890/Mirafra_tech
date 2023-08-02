#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==0||j==0||i==2||j==2)
{
printf("2 ");
}
else
printf("1 ");
}
printf("\n");
}
}
