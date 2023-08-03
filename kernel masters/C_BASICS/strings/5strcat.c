#include<stdio.h>
void srrcat(char a[],char b[]);
int main()
{
char a[100],b[100];
printf("str1");
scanf("%s",a);
printf("str2");
scanf("%s",b);
srrcat(a,b);
printf("%s",a);
}

void srrcat(char a[],char b[])
{
int i,j;
for(i=0;a[i]!='\0';i++);
{
j=i;
}

for(i=0;b[i]!='\0';j++,i++)
{
a[j]=b[i];
}
}
