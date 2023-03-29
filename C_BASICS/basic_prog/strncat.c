#include<stdio.h>
/*void mystrrrncat(char s2[],char s1[],int n)
{
int i,j;
for(i=0;s1[i]!='\0';i++);
{
for(j=0;j<n;j++,i++)
{
s1[i]=s2[j];
}
s1[i]='\0';
}
}*/

/*void mystrrrncat(char s1[],char s2[],int n)
{
int i,j;
for(i=0;s1[i]!='\0';i++)
{
for(j=0;j<n&&s2[j]!='\0';j++,i++)
{
s2[j]=s1[j];
}
s2[j]='\0';
}
}*/


void *mystrrrncat(char *s1,char *s2,int n)
{
int i=0;
while(*s1)
{
s1++;
}
while(i<n)
{
*s1=*s2;
s1++;
s2++;
i++;
}
}


int main()
{
char s1[100];
char s2[100];
int n;
printf("enter string 1");
scanf("%s",s1);
printf("enter string 2");
scanf("%s",s2);
printf("enter no of terms to concatinate\n");
scanf("%d",&n);
mystrrrncat(s1,s2,n);
printf("%s",s1);
}
