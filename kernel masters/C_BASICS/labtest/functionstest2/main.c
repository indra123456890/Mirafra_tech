#include"dates.h"
int main()
{
	int d,m,y,d1,m1,y1,n,i,j,a,b;
	char c;
	printf("no of candidates\n");
	scanf("%d",&n);
	j=0;
	i=2;
	while(j<1)
	{
		printf("enter dob #1\n");
		scanf("%d%c%d%c%d",&d,&c,&m,&c,&y);
		b=isvaliddate(d,m,y);
		if(b==1)
			j++;
		else
			printf("enter valid DOB\n");
	}

	while(i<=n)
	{
		printf("enter dob #%d\n",i);
		scanf("%d%c%d%c%d",&d1,&c,&m1,&c,&y1);
		b=isvaliddate(d1,m1,y1);
		if(b==1)
		{
			a=compare(d,m,y,d1,m1,y1);
			{
				if(a==1)
				{
					d=d;
					m=m;
					y=y;
				}
				else if(a==0)
				{
					d=d1;
					m=m1;
					y=y1;
				}
				else if(a==2)
				{

					d=d1;
					m=m1;
					y=y1;
				}
			}
			i++;
		}
		else
			printf("enter valid DOB\n");
	}
	printdateinformate(d,m,y);
	return (0);
}
`
