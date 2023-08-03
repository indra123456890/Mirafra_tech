#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fptr;
int num,a,x;
fptr=fopen("sum.txt","a+");
if(fptr==NULL)
{
printf("error to open file");
}
if(num)
{
while(num<5)
{
printf("enter the numbers\n");
scanf("%d",&num);
putw(a,fptr);
/*scanf("%d",&x);
if(==0)
break;
}*/
rewind(fptr);
a=getw(fptr);
}
while(!feof(fptr))
{
fptr=fptr+1;
getw(fptr);
}
}
}
