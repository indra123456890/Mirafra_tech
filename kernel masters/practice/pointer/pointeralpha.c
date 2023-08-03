//Write a program in C to print all the alphabets using a pointer.


#include<stdio.h>
int main()
{
char *ptr;
int x;
char alph[27];
ptr=alph;
for(x=1;x<=26;x++)
{
*ptr=x+'A';
*ptr++;
}
ptr=alph;

for(x=1;x<=26;x++)
{
printf("%c",*ptr);
ptr++;
}
}
