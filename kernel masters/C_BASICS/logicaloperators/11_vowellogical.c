#include<stdio.h>
int main()
{
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'?printf("vowel\n"):printf("not vowel\n");
	return 0;
}
