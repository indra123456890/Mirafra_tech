/*#include<stdio.h>
char fun(char c)
{
char d[100];
int i=0;
while(i<3)
{
d[i]=c;
i++;
}
d[i]='\0';
printf("%s",d);
}
int main()
{
char c;
scanf("%c",&c);
fun(c);
}*/

#include<stdio.h>
int main()
{
char c;
char s[100];
int i=0;
while(1)
{
scanf("%c",&c);
if(c=='n')
break;
else
s[i++]=c;
//i++;
}
//s[i]='\0';
printf("%s",s);
}
