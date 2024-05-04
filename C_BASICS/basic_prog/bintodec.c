#include<stdio.h>
int main()
{
int n=1010,i=1,s=0,r;
while(n!=0)
{
r=n%10;
s=s+(r*i);
n=n/10;
i=i*2;
}
printf("%d",s);
}

