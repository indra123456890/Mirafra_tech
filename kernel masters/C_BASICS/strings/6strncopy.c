#include<stdio.h>
void nncopy(char a[],char b[],int n);
int main()
{
int n;
char a[100],b[100];
printf("enter string 1");
scanf("%s",a);
printf("enter string 2");
scanf("%s",b);
printf("enter characters to copy");
scanf("%d",&n);
nncopy(a,b,n);
printf("%s",b);
}

void nncopy(char a[],char b[],int n)
{
int i,j;
for(i=0;b[i]!='\0';i++)
{
j=i;
}
for(j=j+1,i=0;i<n;i++,j++)
{
b[j]=a[i];
}
}
