#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int myatoi(char s[])
{
int i,n=0;
for(i=0;s[i]!=0;i++);
int p=i;
for(i=1;i<p;i++)
n=(n*10)+
