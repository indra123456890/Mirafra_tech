//taking 2 strings with diff size one is small other is big

#include<stdio.h>
#include<string.h>
char* myystrjumb(char s1[],char s2[])
{
int i,j,k;
static char s3[10];
for(i=0,j=0,k=0;s1[i]!='\0';i++,j++,k=k+2)
{
s3[k]=s1[i];
s3[k+1]=s2[j];
}
for(j,k;s2[j]!='\0';j++,k++)
{
s3[k]=s2[j];
}
s3[k]='\0';
return s3;
}
int main()
{
char s1[10]="hi";
char s2[10]="hello";
char *d;
if(strlen(s1)<strlen(s2))
{
d=myystrjumb(s1,s2);
}
else
{
d=myystrjumb(s2,s1);
}
printf("%s",d);
}
