#include<stdio.h>
int main()
{
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	c>=65&&c<=90?printf("alphabet is %c\n",c+32):c>=97&&c<=122?printf("alphabet %c\n",c-32):printf("not alphabet\n");
	return 0;
}
