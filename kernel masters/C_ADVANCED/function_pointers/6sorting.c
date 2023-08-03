#include<stdio.h>
int mystricmp(char *s1,char *s2)
{
int i,x;
for(i=0;(s1[i]!=0 || s2[i]!=0);i++)
{
if(s1[i]<='z' && s1[i]>='a')
{
if(s2[i]<='Z' && s2[i]>='A')
{
x=s1[i]-(s2[i]+32);
if(x>0)
return 1;
else if(x<0)
return -1;
}
else
{
x=s1[i]-s2[i];
if(x>0)
return 1;
else if(x<0)
return -1;
}
}
else if(s1[i]<='Z' && s1[i]>='A')
{
if(s2[i]<='Z' && s2[i]>='A')
{
x=s1[i]-s2[i];
if(x>0)
return 1;
else if(x<0)
return -1;
}
else
{
x=s1[i]-(s2[i]-32);
if(x>0)
return 1;
else if(x<0)
return -1;
}
}
}
return 0;
}
int mystrcmp(char *s1,char *s2)
{
int i,x;
for(i=0;(s1[i]!=0 || s2[i]!=0);i++)
{
x=s1[i]-s2[i];
if(x>0)
return 1;
else if(x<0)
return -1;
}
return 0;
}
void mysortd(char *argv[],int n,int z)
{
int i,j;
char *temp;
for(i=z;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if((z==2)?(mystrcmp(argv[i],argv[j])==-1):(mystricmp(argv[i],argv[j])==-1))
{
temp=argv[i];
argv[i]=argv[j];
argv[j]=temp;
}
}
}
for(i=z;i<n;i++)
printf("%s\n",argv[i]);
}
void mysorta(char *argv[],int n,int z)
{
int i,j;
char *temp;
for(i=z;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if((z==2)?(mystricmp(argv[i],argv[j])==1):(mystrcmp(argv[i],argv[j])==1))
{

temp=argv[i];
argv[i]=argv[j];
argv[j]=temp;  
}
}
}
for(i=z;i<n;i++)
printf("%s\n",argv[i]);
}
int main(int argc,char *argv[])
{
int i;
if(argv[1][0]=='-' && argv[1][1]=='r')
{
if(argv[2][0]=='-' && argv[2][1]=='i')
{
mysortd(argv,argc,3);
}
else
{
mysortd(argv,argc,2);
}
}
else
{
if(argv[1][0]=='-' && argv[1][1]=='i')
{
mysorta(argv,argc,2);
}
else
{
mysorta(argv,argc,1);
}
}
}




