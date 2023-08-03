#include<stdio.h>
int main()
{
	int i,a,b,num,big,small;
	printf("enter total numbers");
	scanf("%d",&num);
	scanf("%d",&a);
	big=a;
	small=a;
	for(i=0;i<num-1;i++)
	{
		scanf("%d",&b);
		if(big<b)
		{
			big=b;
		}
		if(small>b)
		{
			small=b;
		}
	}
	printf("big=%d\n small=%d\n",big,small);
}
