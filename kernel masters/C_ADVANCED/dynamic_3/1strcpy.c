/*1) implement your own string copy function.

try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source

note down the output and analyze the reasons.*/


#include<stdio.h>
#include<stdlib.h>

void mystrcpy(char d[],char s[])
{
int i=0;
while(s[i]!='\0')
{
d[i]=s[i];
i++;
}
d[i]=0;
}


int main()
{
char *s=(char *)malloc(10*sizeof(char));
printf("enter the string\n");
scanf("%s",s);
char s1[20];
printf("enter the string\n");
scanf("%s",s1);
mystrcpy(s,s1);
printf("%s\n",s);

mystrcpy(s1,s);
printf("%s\n",s1);

mystrcpy(s1,s1);
printf("%s\n",s1);

mystrcpy(s,s);
printf("%s\n",s);
}
