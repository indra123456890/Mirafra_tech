/*10) Implement atof function ( string to float conversion)

  function takes a numerical string as input and returns the equivalent float number as output.

  eg., input : 3.145600

output: 3.14*/
#include<stdio.h>
#include<string.h>
float alphatofloat(char *s);
int main()
{
	int i;
	float f;
	char s[100];
	printf("enter string\n");
	scanf("%99[^\n]s",s);
	for(i=0;s[i]!=0;i++)
	{
		if(!(s[i]>='0'&&s[i]<='9'))
		{
			if(!(s[i]=='.'))
				break;
		}
	}
	if(s[i]==0)
	{
		f=alphatofloat(s);
		printf("%f\n",f);
	}
	else
		printf("enter strig is improper formate\n");
}
float alphatofloat(char *s)
{
	int i,j,n=0,c=0,d=1;
	float k;	
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]=='.')
			break;
		j=s[i]-48;
		n=n*10+j;
	}
	i=i+1;
	for(;s[i]!=0;i++)
	{
		j=s[i]-48;
		c=c*10+j;
		d=d*10;
	}
	k=(float)c/(float)d;
	k=n+k;
	return k;
}

