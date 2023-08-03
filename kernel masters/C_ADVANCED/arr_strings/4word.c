/*4) WAP to display the word expansion of a number
eg., Input : 789
Output : Seven Eight Nine*/





#include<stdio.h>
int main()
{
char *s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int i,n,m,a[10];
printf("enter input");
scanf(" %d",&n);
for(i=0;n>0;i++)
{
a[i]=n%10;
n=n/10;
m=i;
}
for(i=m;i>=0;i--)
{
printf("%s",s[a[i]]);
}
}
