/* ip hi hello is ok
op hi elo s k*/

#include<stdio.h>
int main()
{
	int n=16;
	char s[50]="hi hello is ok";
	int i,j,k=0;
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]==s[j]&&s[j]!=32)
			{
				for(k=j;s[k]!='\0';k++)
				{
					s[k]=s[k+1];
				}
//				c++;
				j--;
				//n--;
			}
		}
	}
	printf("%s",s);
}
