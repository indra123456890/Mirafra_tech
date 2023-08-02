/*#include<stdio.h>
#include<stdlib.h>
int main()
{
char *a,*b;
int n,n1,i=0;
printf("enter the size of string");
scanf("%d",&n);
a=(char *)malloc(n*sizeof(char));
printf("enter the string");
scanf("%s",a);
printf("enter the size of 2nd string\n");
scanf("%d",&n1);
b=(char *)malloc(n1*sizeof(char));
printf("enter the string 2");
scanf("%s",b);
//gets(a);
while(*(a+i)!='\0')
{
*(b+i)=*(a+i);
i++;
}
//*(b+i)='\0';
printf("%s",b);
//gets(b);
free(a);
free(b);
}*/



//using function

#include<stdio.h>
#include<stdlib.h>
void mydstrcpy(char *p1,char *p2)
{
int i=0;
while(*(p1+i)!='\0')
{
*(p2+i)=*(p1+i);
i++;
}
*(p2+i)='\0';
printf("%s",p2);
}
int main()
{
char *p1,*p2;
int n,n1,i=0;
printf("enter string 1 size");
scanf("%d",&n);
p1=(char *)malloc(n*sizeof(char));
printf("enter size of string 2");
scanf("%d",&n1);
p2=(char *)malloc(n1*sizeof(char));
printf("enter the string 1");
scanf("%s",p1);
mydstrcpy(p1,p2);
free(p1);
free(p2);
}

