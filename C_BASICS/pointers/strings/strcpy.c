/*#include<stdio.h>
char *  strccpy(char *s,char *d)
{
char *r=d;
while(*s!='\0')
{
*d=*s;
*d++;
*s++;
}
*d='\0';
return r;
}
int main()
{
char a[10]="indra";
char b[10];
strccpy(a,b);
printf("%s",b);
}


//This way also we can do without returning
#include<stdio.h>
void  strccpy(char *s,char *d)
{
char *r=d;//directlt it gets modified in r char pte when gets modified in d
while(*s!='\0')
{
*d=*s;
*d++;
*s++;
}
*d='\0';
//return r;
}
int main()
{
char a[10]="indra";
char b[10];
strccpy(a,b);
printf("%s",b);
}*/


//string character pointer if we also intialize char *b="indra" along with char *="indra" and send to function if we try to do *d=*s it wont work because it cant be modified
#include<stdio.h>
void  strccpy(char *s,char *d)
{
//char *r=d;
while(*s!='\0')
{
*d=*s;
*d++;
*s++;
}
*d='\0';
//return d;
}
int main()
{
char *a="indra";
char b[10];//see mistake here a character pointer string conmstant can not be declared and sent to function as we perform strcpy on char *b it is not allowed since it cant be modified.
strccpy(a,b);
printf("%s",b);
}

