#include<stdio.h>
void prime(int n)
{
	int i=2,c=0;
	while(i<=n/2)
	{
		if(n%i==0)
			c++;
		if(c==1)
			continue;
		else
			i++;
	}
	if(c==0)
		printf("%d\t",n);
}
int main()
{
	int i,t;
	int arr[5]={1,3,4,5,7};
	for(i=0;i<5;i++)
	{
		t=arr[i];
		prime(t);
	}
}
