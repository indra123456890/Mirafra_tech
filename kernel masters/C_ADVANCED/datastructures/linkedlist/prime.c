#include<stdio.h>
#include<stdlib.h>
typedef struct prime
{
	int k;

	struct prime *next;
}prime;
prime *createnode(int i)
{
	prime *new=(prime *)malloc(sizeof(prime));
new->k=i;	
new->next=NULL;
	return new;
}


				void printll(prime *p)
				{
					while(p)
					{
						printf("%d",p->k);
						p=p->next;
					}
				}
				int main()
				{
					prime *H=NULL,*N=NULL,*L=NULL;
					int i,j,count;
				for(i=1;i<=100;i++)
{
count=0;
for(j=1;j<=i;j++)
{

if(i%j==0)
{
count++;
}
}
if(count==2)

					{
						N=createnode(i);
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
printll(H);
}
