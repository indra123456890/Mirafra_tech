/*#include<stdio.h>
int main()
{
	int fact=1,n;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		fact=fact*n;
		n--;
	}
	printf("%d",fact);
}

#include<stdio.h>
int fact(int n)
{
  int p=1;
if(n==0)
{
return p;
}
else
{
return n*fact(n-1);
}
}




int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
fact(n);
printf("%d",fact(n));
}*/


#include<stdio.h>
int fact(int n)
{
static int p=1;
if(n==0)
return p;
p=p*n;
return fact(n-1);
}

int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
//fact(n);
printf("%d",fact(n));
}
