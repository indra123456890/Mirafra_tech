#include<stdio.h>
#include<stdlib.h>

typedef struct primenum
{
	int n,c;
	struct primenum *next;
}primenum;

primenum *createnode(int i,int cp)
{
	primenum *new=(primenum*)malloc(sizeof(primenum));
	new->n=i;
	new->c=cp;
	new->next=NULL;
	return new;
}

void print(primenum *a)
{
	while(a)
	{
		printf("%d %d\n",a->n,a->c);
		a=a->next;
	}
}

int prime(int i)
{
	int x=0,j;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			x++;
		}
	}
	if(x==2)
	{
		return 1;
	}
	return 0;
}

int main()
{
	primenum *H=NULL,*N=NULL,*L=NULL;int i;
	for(i=2;i<=100;i++)
	{
		if(prime(i)&&prime(i+2))
		{
			N=createnode(i,i+2);
			if(!H)
			{
				H=N;
			}
			else
			{
				L->next=N;
			}
			L=N;
		}
	}
	print(H);
}


