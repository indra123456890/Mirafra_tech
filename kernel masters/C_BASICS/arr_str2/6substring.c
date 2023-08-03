#include<stdio.h>
#include<string.h>
int main()
{
	int i,e,j,q,w,d;
	char s[100];
	char r[100];
	char t[100];
	printf("enter mainstring\n");
	scanf("%99[^\n]s",s);
	printf("enter sub string\n");
	scanf(" %99[^\n]s",r);
	printf("enter replace string\n");
	scanf(" %99[^\n]s",t);
	q=strlen(r);
	w=strlen(t);
	printf("q::%d w::%d\n",q,w);
	if(q==w)
	{
		for(i=0;s[i]!=0;i++)
		{
			d=i;
			for(j=0;r[j]!=0;j++,d++)
			{
				if(s[d]!=r[j])
					break;
			}
			if(r[j]==0)
			{
				e=i;
				for(j=0;t[j]!=0;j++,e++)
				{
					s[e]=t[j];
				}
			}
		}
		printf("%s",s);
	}

	else
		printf("enter substring and replacestring of samesize\n");
}


