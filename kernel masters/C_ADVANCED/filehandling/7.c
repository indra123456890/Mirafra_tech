#include<stdio.h>
#include<stdlib.h>
int main()
{
int c,sum=0;
FILE *fptr;
fptr=fopen("abc.txt","r");
while(c=getc(fptr)!=EOF)
{
if(c!='\n')
{
printf("%d",c-48);
sum=sum+(c-48);
}
}
fclose(fptr);
printf("sum of integer is %d\n",sum);
}
