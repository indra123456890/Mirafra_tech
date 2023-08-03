#include<stdio.h>
int main()
{
char t;
printf("enter the character:");
scanf("%c",&t);
if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'||t=='A'||t=='E'||t=='I'||t=='O'||t=='U')
{
printf("given char is a vowel");
}
else
{
printf("given char is not vowel");
}
}
