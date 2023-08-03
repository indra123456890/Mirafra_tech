#include<stdio.h>
char * strrev(char *s)
{
	int i,c,j;
	char *r;
	r=s;
	for(i=0;*(s+i)!=0;i++);
	i=i-1;
	for(j=0;j<i;j++,i--)
	{
		c=*(s+i);
		*(s+i)=*(s+j);
		*(s+j)=c;
	}
	return r;
}


int main()
{
	char s[100];
	char *p;
	printf("str:");
	scanf("%s",s);
	printf("before rev address:%p\n",s);
	p=strrev(s);
	printf("%s\n",s);
	printf("after rev addrs=%p\n",s);

}


