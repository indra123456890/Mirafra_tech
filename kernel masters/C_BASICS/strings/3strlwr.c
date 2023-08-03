#include<stdio.h>
void strlwr(char low[]);
int main()
{
char low[50];
{
scanf("%s",low);
strlwr(low);
printf("%s",low);
return 0;
}
}

void strlwr(char low[])
{
int i;
for(i=0;low[i]!='\0';i++)
{
if(low[i]>=65&&low[i]<=90)
{
low[i]=low[i]+32;
}
}
}


