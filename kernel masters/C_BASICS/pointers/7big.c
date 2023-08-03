#include<stdio.h>
int main()
{
	int x,y,z;
	int *p1,*p2,*p3;
	printf("enter values x y z");
	scanf("%d %d %d",&x,&y,&z);
	p1=&x;
	p2=&y;
	p3=&z;
	if(*p1>*p2&&*p1>*p3)
	{
		printf("*p1 is bigger");
	}
	else if(*p2>*p3)
	{
		printf("*p2 is bigger");
	}
	else if(*p3>*p1&&*p3>*p2)
	{
		printf("*p3 is bigger");
	}
	else if(*p1==*p2&&*p3>*p1||)
	{
		printf("*p3 is bigger");
	}
	else if(*p1==*p3&&*p2>*p3)
		printf("*p2 is bigger");
	else if(*p2==*p3&&*p1>*p3)
		printf("*p1 is bigger");

	else 
		printf("all equal");

	return 0;
}

