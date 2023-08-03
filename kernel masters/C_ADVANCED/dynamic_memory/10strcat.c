/*10) 
Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
 eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
 output : kerraaya*/


#include<stdio.h>
#include<stdlib.h>
void *concat(char s[],char d[],char r[])
{
int i,n,m,j;
printf("1 str to concatinate");
scanf("%d",&n);
printf("2 string to concatinate");
scanf("%d",&m);
for(i=0;i<n;i++)
{
r[i]=s[i];
}
for(j=0;j<m;j++,i++)
{
r[i]=d[j];
}
return r;
}

int main()
{
char *s=(char*)malloc(30);
printf("enter 1st string");
scanf("%s",s);

char *d=(char*)malloc(30);
printf("enter 2nd string");
scanf("%s",d);

//printf("the new string is:");
//scanf("%s",r);
char *r=(char*)malloc(50);
r=concat(s,d,r);
printf("%s",r);
}


