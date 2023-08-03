 #include<stdio.h>
void isprime(int m, int n)
{
	int j;
for(m;m<=n;m++)
	{
		for(j=2;j<=(m/2);j++)
		{
			if(m%j==0)
				break;
		}
		if(j==(m/2)+1)
			printf("%d\n",m);
	}
}
int main()
{
	int m,n;
	printf("enter min value\n");
	scanf("%d",&m);
	printf("enter max value\n");
	scanf("%d",&n);
	isprime(m,n);
	return 0;
}
