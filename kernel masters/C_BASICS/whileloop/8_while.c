#include<stdio.h>
int main()
{
int i,n;
printf("Enter no.of inputs\n");
scanf("%d",&n);
i=2;
{
int s1,s2,s3,s4,s5,s6,t,p,c,m;
printf("Enter 6 subject marks of person 1\n");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
t = s1+s2+s3+s4+s5+s6;
p=t;
m=1;
while(i<=n)
{
printf("Enter 6 subject marks of person %d\n",i);
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
t = s1+s2+s3+s4+s5+s6;
if(t>p&&s1>39&&s2>39&&s3>39&&s4>39&&s5>39&&s6>39)
{
p = p>t?p:t;
m=i;
}

i++;
}
printf("person %d is topper\n",m);
}
return 0;
}
