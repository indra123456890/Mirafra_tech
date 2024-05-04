
//we can return  string by accessing the strings through pointers in parametres if we tke as it is as arrays then no need to return since array itself  pointer.

/*#include<stdio.h>
//#include<string.h>
void mystrcpy(char d[],char s[])
{
int i=0;
while(s[i]!='\0')
{
d[i]=s[i];
i++;
}
}*/
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



/*int main()
{
char s[5],d[6];
printf("enter source string\n");
scanf("%s",s);
printf("enter destination string");
scanf("%s",d);
mystrcpy(d,s);
printf("%s",d);
}*/


#include<stdio.h>
char *sstrcpy(char s[],char d[])
{
int i=0;
while(s[i]!='\0')
{
d[i]=s[i];
i++;
}
d[i]='\0';
return d;
}
int main()
{
char s[10]="indra";
char d[10];
int i;
char *k;
k=sstrcpy(s,d);
for(i=0;*(k+i)!='\0';i++)
{
printf("%c",*(k+i));
}
}
