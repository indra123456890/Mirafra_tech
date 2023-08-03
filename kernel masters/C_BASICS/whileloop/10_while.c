#include<stdio.h>
int main()
{
int d,m,y,i,x;
char e,f;
i=1;
printf("Enter no.of Inputs and the Date Of Births:\n");
scanf("%d",&x);
while(i<=x)
{
scanf("%d%c%d%c%d",&d,&e,&m,&f,&y);
if(m==1)
printf("%d january %d\n",d,y);
else if(m==2)
printf("%d feb %d\n",d,y);
else if(m==3)
printf("%d march %d\n",d,y);
else if(m==4)
printf("%d April %d\n",d,y);
else if(m==5)
printf("%d May %d\n",d,y);
else if(m==6)
printf("%d june %d\n",d,y);

else if(m==7)
printf("%d July %d\n",d,y);
else if(m==8)
printf("%d August %d\n",d,y);
else if(m==9)
printf("%d September %d\n",d,y);
else if(m==10)
printf("%d October %d\n",d,y);
else if(m==11)
printf("%d November %d\n",d,y);
else if(m==12)
printf("%d December %d\n",d,y);
if(y%4==0)
printf(" It is a leap year\n");
i++;

}        
return 0;

}

