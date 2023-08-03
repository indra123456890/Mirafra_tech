#include<stdio.h>
int main()
{
char c;
printf("enter a char\n");
scanf("%c",&c);
c<90&&c>=65?printf("alphabet\n"):c<=122&&c>=97?printf("alphabet\n"):printf("not alphabet");
return 0;
}
