#include<stdio.h>
//#include<string.h>
void mystrcpy(char d[],char s[])
{
int i=0;
while(s[i]!='\0')
{
d[i]=s[i];
i++;
}
}
/*int main()
{
int i;
char d[3]="mast";
char s[5]="kern";
printf("before\n");
printf("dest:%s\n",d);
printf("source:%s\n",s);
strcpy(d,s);
printf("after\n");
printf("dest:%s\n",d);
printf("source:%s",s);
}*/



int main()
{
char s[5],d[6];
printf("enter source string\n");
scanf("%s",s);
printf("enter destination string");
scanf("%s",d);
mystrcpy(d,s);
printf("%s",d);
}
