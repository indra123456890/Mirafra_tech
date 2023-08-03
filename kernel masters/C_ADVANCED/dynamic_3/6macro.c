//6) define a sizeof macro ,that will find the size of a given variable as parameter, using pointers. try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference.
#include<stdio.h>
#include<stdlib.h>
#define size(x)  ((char *)(&x+1) - (char *)(&x))


int main()
{
char arr[10];
char *p1=malloc(10*sizeof(char));
char *s="indra";
long p,q,r;
p=size(arr);
printf("size of character array %lu\n",p);
q=size(*p1);
printf(" size of character pointer %lu\n",q);
r=size(*s);
printf("size of string constant %lu\n",r);
return 0;
}

