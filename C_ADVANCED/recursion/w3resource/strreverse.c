//ret with char and printing string with seint address renurnin int from pointer showing
//so directly we can return with no val putting volid automatically s returns to main and print s.if we return to char it string return to main  but dont assign any pointer to calling fun directly print s.
#include<stdio.h>
#include<string.h>
char   strreverse(char s[], int l,int k)
{
if(l>k)
return s;
char c;
if(l<k)
{
c=s[l];
s[l]=s[k];
s[k]=c;
}
return strreverse(s,l+1,k-1);
}
int main()
{
char s[10]="indra";
int i=0;
int j=strlen(s);
strreverse(s,i,j-1);
printf("%s",s);
}
