 #include<stdio.h>
int prime(int a)
{
	int x,i=1,c=0;
	while(i<=a)
	{
		if(a%i==0)
		{
			c++;
		}
		i++;
		if(c==2)
			x=1;
		else
			x=0;
	}
	return x;
}


int main()
{
	int a,i=1,c=0,x;
	printf("enter a value");
	scanf("%d",&a);
	x=prime(a);
	if(x==1)
		printf("%d is a prime",a);
	else
		printf("%d is no a prime no",a);
}

