#include<stdio.h>
int main()
{
	int d,c,n=21;
	printf("enter your choice\n");
	for(  ;n!=1; )
	{	
		printf("user::");
		scanf("%d",&c);
	//	printf("\n");
		if(c>0&&c<5)
		{
			d=5-c;
			printf("computer::%d\n",d);
			n=n-5;
		printf("remaining::%d\n",n);
		}
		else
			printf("enter value below 5\n");
	}
	printf("computer is winner\n");
}



