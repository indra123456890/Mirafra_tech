//3) Write a program to reverse a string , using index method & pointer increment method
#include<stdio.h>
#include<string.h>
void mystrrev(char *p);
void mystringrev(char *p);
int main()
{
char a[20]="indra kumar";
mystrrev(a);
mystringrev(a);
}

void mystrrev(char *p)
{
char c;
int i,j,len,k;
for(i=0;p[i];i++);
len=i-1;
k=len;
// k=strlen(p);
for(j=0;j<k;j++,k--)
{
c=p[j];
p[j]=p[k];
p[k]=c;
}
printf("%s\n",p);
}

void mystringrev(char *p)
{
//printf("%s\n",p);
char *q=p,c;
char *r=p;
for(;*p;p++);
p--;
for(;*p!=*q;p--,q++)
{
c=*p;
*p=*q;
*q=c;
}
printf("%s\n",r);
}


