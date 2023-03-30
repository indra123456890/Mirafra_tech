#include<stdio.h>
void mystrrrncpy(char s[],char d[],int n)
{
int i;
for(i=0;i<n;i++)
{
d[i]=s[i];
}
printf("%s",d);
}

int main()
{
int n;
char s[100];
char d[100];
printf("enter source string");
scanf("%s",s);
printf("enter destination string");
scanf("%s",d);
printf("enter how many characters to copy\n");
scanf("%d",&n);
mystrrrncpy(s,d,n);
}


