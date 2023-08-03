#include<stdio.h>
void swap(char *a,char *b);
int main()
{
char a,b;
printf("enter two characters\n");
scanf("%c %c",&a,&b);
swap(&a,&b);
printf("after swap:a=%c,b=%c\n",a,b);
}

void swap(char *a,char *b)
{
char c;
c=*a;
*a=*b;
*b=c;
}

