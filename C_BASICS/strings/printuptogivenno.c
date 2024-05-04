#include<stdio.h>
void inputprint(char s[],int n)
{
int i=0;
for(i=0;i<n;i++)
{
printf("%c",s[i]);
}
}
int main()
{
char s[30]="mirafratechnololgies";
int n;
scanf("%d",&n);
inputprint(s,n);
}
