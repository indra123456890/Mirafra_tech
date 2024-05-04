//mistake here declared and intialized c var after main and if we put c=1 after jloop op not comes...if we put c=1 after i loop correrct op comes.

#include<stdio.h>
int main()
{
int a[9]={8,3,8,5,4,3,4,3,5};
int i,j;
for(i=0;i<9;i++)
{
int c=1;
for(j=i+1;j<9;j++)
{
if(a[i]==a[j])
{
c++;
if(c==3||c==5)
{
printf("%d occured %d times",a[j],c);
}
}
}
}
}
